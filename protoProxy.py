__version__ = "0.6"

__all__ = ["SimpleHTTPRequestHandler"]

import os
import posixpath
import BaseHTTPServer
import urllib, httplib
import cgi
import sys
import shutil
import mimetypes
import re
import socket

try:
    from cStringIO import StringIO
except ImportError:
    from StringIO import StringIO


class SimpleHTTPRequestHandler(BaseHTTPServer.BaseHTTPRequestHandler):

    """Simple HTTP request handler with GET and HEAD commands.

    This serves files from the current directory and any of its
    subdirectories.  The MIME type for files is determined by
    calling the .guess_type() method.

    The GET and HEAD requests are identical except that the HEAD
    request omits the actual contents of the file.

    """

    server_version = "SimpleHTTP/" + __version__

    def do_GET(self):
        """Serve a GET request."""
        f = self.send_head()
        if f:
            self.copyfile(f, self.wfile)
            f.close()

    def do_HEAD(self):
        """Serve a HEAD request."""
        f = self.send_head()
        if f:
            f.close()
    
    def do_CONNECT(self):
    # soc.settimeout(4)
        path=self.path
        address = (path.split(':')[0], int(path.split(':')[1]))
        headers=self.transheader()
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        try:
            s.connect(address)
        except:
            print "fuck"
        else:
            self.send_response(200)
            qs = self.rfile.read()
        """
        try:
            soc.connect(address)
        except socket.error, arg:
            conn.sendall("/1.1" + str(arg[0]) + " Fail\r\n\r\n")
            conn.close()
            soc.close()
        else:
            conn.sendall('HTTP/1.1 200 Connection established\r\n\r\n')
        try:
            while True:
                data = conn.recv(99999)
                soc.sendall(data)
                data = soc.recv(999999)
                conn.sendall(data)
        except:
            conn.close()
            soc.close()
            """
            
    def do_POST(self):
        print "POST"  
        headers=self.transheader()
        url = self.path
        host=url.split('/')[2]
        path = url[7+len(host):]
        length = int(self.headers.getheader('content-length'))  
        qs = self.rfile.read(length)    
        conn = httplib.HTTPConnection(host)
        conn.request('POST', path, qs, headers)
        response = conn.getresponse()
        resHeaders = response.getheaders()
        resData = response.read()
        reason = response.status
        self.send_response(reason)
        for header in resHeaders:
            self.send_header(header[0], header[1])
        self.end_headers()
        f = StringIO()
        f.write(resData)
        length = f.tell()
        f.seek(0)
        if f:
            self.copyfile(f, self.wfile)
            f.close()
    
    def transheader(self):
        headerlist=self.headers.headers
        headerdict={}
        for header in headerlist:
            key = header.split(':')[0]
            value = header.split(':')[1]
            value = value[:len(value)-2]
            headerdict[key]=value
        return headerdict

    def send_head(self):
        """Common code for GET and HEAD commands.

        This sends the response code and MIME headers.

        Return value is either a file object (which has to be copied
        to the outputfile by the caller unless the command was HEAD,
        and must be closed by the caller under all circumstances), or
        None, in which case the caller has nothing further to do.

        """
        url = self.path
        headers=self.headers.headers
        resObj=urllib.urlopen(url)
        res=resObj.read()
        f = StringIO()
        f.write(res)
        length = f.tell()
        f.seek(0)
        self.send_response(200)
        encoding = sys.getfilesystemencoding()
        self.send_header("Content-type", "text/html; charset=%s" % encoding)
        self.send_header("Content-Length", str(length))
        self.end_headers()
        return f
        
    def send_postHead(self, result):
        path = self.translate_path(self.path)
        #try:
            #list = os.listdir(path)
        #except os.error:
            #self.send_error(404, "No permission to list directory")
            #return None
        f = StringIO()
        f.write(result)
        length = f.tell()
        f.seek(0)
        self.send_response(200)
        encoding = sys.getfilesystemencoding()
        self.send_header("Content-type", "text/html; charset=%s" % encoding)
        self.send_header("Content-Length", str(length))
        self.end_headers()
        return f
    
    def list_directory(self, path):
        """Helper to produce a directory listing (absent index.html).

        Return value is either a file object, or None (indicating an
        error).  In either case, the headers are sent, making the
        interface the same as for send_head().

        """
        try:
            list = os.listdir(path)
        except os.error:
            self.send_error(404, "No permission to list directory")
            return None
        list.sort(key=lambda a: a.lower())
        f = StringIO()
        displaypath = cgi.escape(urllib.unquote(self.path))
        """f.write('<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 3.2 Final//EN">')
        f.write("<html>\n<title>Directory listing for %s</title>\n" % displaypath)
        f.write("<body>\n<h2>Directory listing for %s</h2>\n" % displaypath)
        f.write("<hr>\n<ul>\n")"""
        f.write('(')
        for name in list:
            fullname = os.path.join(path, name)
            displayname = linkname = name
            # Append / for directories or @ for symbolic links
            if os.path.isdir(fullname):
                displayname = name + "/"
                linkname = name + "/"
            if os.path.islink(fullname):
                displayname = name + "@"
                # Note: a link to a directory displays with @ and links with /
            f.write("'%s',"% cgi.escape(displayname))
        f.write(')')
        #f.write("</ul>\n<hr>\n</body>\n</html>\n")
        length = f.tell()
        f.seek(0)
        self.send_response(200)
        encoding = sys.getfilesystemencoding()
        self.send_header("Content-type", "text/html; charset=%s" % encoding)
        self.send_header("Content-Length", str(length))
        self.end_headers()
        return f

    def translate_path(self, path):
        """Translate a /-separated PATH to the local filename syntax.

        Components that mean special things to the local file system
        (e.g. drive or directory names) are ignored.  (XXX They should
        probably be diagnosed.)

        """
        # abandon query parameters
        path = path.split('?',1)[0]
        path = path.split('#',1)[0]
        path = posixpath.normpath(urllib.unquote(path))
        words = path.split('/')
        words = filter(None, words)
        path = os.getcwd()
        for word in words:
            drive, word = os.path.splitdrive(word)
            head, word = os.path.split(word)
            if word in (os.curdir, os.pardir): continue
            path = os.path.join(path, word)
        return path

    def copyfile(self, source, outputfile):
        """Copy all data between two file objects.

        The SOURCE argument is a file object open for reading
        (or anything with a read() method) and the DESTINATION
        argument is a file object open for writing (or
        anything with a write() method).

        The only reason for overriding this would be to change
        the block size or perhaps to replace newlines by CRLF
        -- note however that this the default server uses this
        to copy binary data as well.

        """
        shutil.copyfileobj(source, outputfile)

    def guess_type(self, path):
        """Guess the type of a file.

        Argument is a PATH (a filename).

        Return value is a string of the form type/subtype,
        usable for a MIME Content-type header.

        The default implementation looks the file's extension
        up in the table self.extensions_map, using application/octet-stream
        as a default; however it would be permissible (if
        slow) to look inside the data to make a better guess.

        """

        base, ext = posixpath.splitext(path)
        if ext in self.extensions_map:
            return self.extensions_map[ext]
        ext = ext.lower()
        if ext in self.extensions_map:
            return self.extensions_map[ext]
        else:
            return self.extensions_map['']

    if not mimetypes.inited:
        mimetypes.init() # try to read system mime.types
    extensions_map = mimetypes.types_map.copy()
    extensions_map.update({
        '': 'application/octet-stream', # Default
        '.py': 'text/plain',
        '.c': 'text/plain',
        '.h': 'text/plain',
        '.php': 'text/html',
        })


def test(HandlerClass = SimpleHTTPRequestHandler,
         ServerClass = BaseHTTPServer.HTTPServer):
    BaseHTTPServer.test(HandlerClass, ServerClass)


if __name__ == '__main__':
    test()
