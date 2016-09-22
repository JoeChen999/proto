import sys
from PyQt4 import QtGui, QtCore
import time
import random
import socket
import urlparse
import httplib
import readconfig

class MyThread(QtCore.QThread):
    trigger = QtCore.pyqtSignal(str, str, str)
    isAlive = True
    def __init__(self, parent=None):
        super(MyThread, self).__init__(parent)
        self.id=0
        
    def setup(self, host, port):
        self.host = host
        self.port = port

    def run(self):
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        s.bind((self.host, self.port))
        s.listen(500)
        print "Serving at %s" % self.port
        
        while 1:
            if self.isAlive==True:
                try:
                    conn, addr = s.accept()
                    req_data, data, url= self.handle_connection(conn)
                    if url!='connect':
                        self.trigger.emit(req_data, data, url)
                except KeyboardInterrupt:
                    print "Bye..."
                    break
            else:
                break
            self.id+=1


    def getline(self, conn):
        line = ''
        while 1:
            buf = conn.recv(1)
            if buf == '\r':
                line += buf
                buf = conn.recv(1)
                if buf == '\n':
                    line += buf
                    return line
            else:
                line += buf


    def get_header(self, conn):
        headers = ''
        while 1:
            line = self.getline(conn)
            if line is None:
                break
            if line == '\r\n':
                break
            else:
                headers += line
        return headers


    def parse_header(self, raw_headers):
        request_lines = raw_headers.split('\r\n')
        first_line = request_lines[0].split(' ')
        method = first_line[0]
        full_path = first_line[1]
        version = first_line[2]
        print "%s %s" % (method, full_path)
        (scm, netloc, path, params, query, fragment) \
            = urlparse.urlparse(full_path, 'http')
        i = netloc.find(':')
        if i >= 0:
            address = netloc[:i], int(netloc[i + 1:])
        else:
            address = netloc, 80
        return method, version, scm, address, path, params, query, fragment


    def handle_connection(self, conn):
        req_headers = self.get_header(conn)
        req_data=''
        data=''
        if req_headers is None:
            return
        method, version, scm, address, path, params, query, fragment = self.parse_header(req_headers)
        if method == 'GET':
            req_data, data=self.do_GET(conn,
                   req_headers,
                   address,
                   path,
                   params,
                   query,
                   method,
                   version)
            url=address[0]+path
        elif method == 'CONNECT':
            address = (path.split(':')[0], int(path.split(':')[1]))
            self.do_CONNECT(conn,
                       req_headers,
                       address)
            url='connect'
        elif method == 'POST':
            req_data, data=self.do_POST(conn, req_headers, address, path)
            url=address[0]+path
        else:
            req_data=''
            data=''
            url=address[0]+path
        return req_data, data, url

    def do_CONNECT(self, conn, req_headers, address):
        soc = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        try:
            soc.connect(address)
        except socket.error, arg:
            conn.sendall("/1.1" + str(arg[0]) + " Fail\r\n\r\n")
            conn.close()
            soc.close()
        else:
            conn.sendall('HTTP/1.1 200 Connection established\r\n\r\n')
            try:
                data = conn.recv(99999)
                soc.sendall(data)
                data = soc.recv(999999)
                conn.sendall(data)
                soc.close()
                conn.close()
            except:
                conn.close()
                soc.close()

    def do_GET(self, conn, req_headers, address, path, params, query, method, version):
        path = urlparse.urlunparse(("", "", path, params, query, ""))
        req_headers = " ".join([method, path, version]) + "\r\n" +\
            "\r\n".join(req_headers.split('\r\n')[1:])
        soc = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        try:
            soc.connect(address)
        except socket.error, arg:
            conn.sendall("HTTP/1.1" + str(arg[0]) + " Fail\r\n\r\n")
            conn.close()
            soc.close()
        else:
            if req_headers.find('Connection') >= 0:
                req_headers = req_headers.replace('keep-alive', 'close')
            else:
                req_headers += req_headers + 'Connection: close\r\n'
            req_headers += '\r\n'
            soc.sendall(req_headers)
            data = ''
            while 1:
                try:
                    buf = soc.recv(8129)
                    data += buf
                except:
                    buf = None
                finally:
                    if not buf:
                        soc.close()
                        break
            conn.sendall(data)
            conn.close()
            return '', data
            
    def transHeaders(self, req_headers):
            headerList=req_headers.split('\n')
            headers={}
            i=0
            for header in headerList:
                if i!=0 and header!='':
                    headerKey=header.split(':')[0]
                    headerVal=header.split(':')[1]
                    headers[headerKey]=headerVal
                i+=1
            return headers
                
    def do_POST(self, conn, req_headers, address, path):
        soc = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        try:
            soc.connect(address)
        except socket.error, arg:
            conn.sendall("HTTP/1.1" + str(arg[0]) + " Fail\r\n\r\n")
            conn.close()
            soc.close()
        else:
            if req_headers.find('Connection') >= 0:
                req_headers = req_headers.replace('keep-alive', 'close')
            else:
                req_headers += req_headers + 'Connection: close\r\n'
            req_headers += '\r\n'
            req_data=conn.recv(99999)
            soc.sendall(req_headers+req_data)
            data = ''
            while 1:
                try:
                    buf = soc.recv(8129)
                    data += buf
                except:
                    buf = None
                finally:
                    if not buf:
                        soc.close()
                        break
            conn.sendall(data)
            conn.close()
            return req_data, data

if __name__=='__main__':
    t=MyThread()
    t.setup('', 8000)
    t.start()
