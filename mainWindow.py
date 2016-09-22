# -*- coding: utf-8 -*-

"""
Module implementing MainWindow.
"""
import sys, commands
import urllib
import base64
import PyQt4
import os
import traceback
from PyQt4 import QtGui, QtCore
from PyQt4.QtGui import *
from PyQt4.QtCore import *

from Ui_mainWindow import Ui_MainWindow
from proxyserver import MyThread

class MainWindow(QMainWindow, Ui_MainWindow):
    """
    Class documentation goes here.
    """
    def __init__(self, parent = None):
        """
        Constructor
        """
        self.modelName_1=''
        self.modelName_2=''
        QMainWindow.__init__(self, parent)
        self.setupUi(self)
        self.startButton.clicked.connect(self.start_threads)
        self.stopButton.clicked.connect(self.stop_threads)
        self.clearButton.clicked.connect(self.clear)
        self.hostList=[]
        self.nodeList=[]
        self.protoInfo=[]
        self.treeWidget.connect(self.treeWidget, SIGNAL('itemClicked(QTreeWidgetItem*, int)'), self.onTreeItemSelect)
        self.fileBrowserButton.clicked.connect(self.chooseFile)
        self.fileBrowserButton_2.clicked.connect(self.chooseFile_2)
        self.translateButton.clicked.connect(self.transReq)
        self.translateButton_2.clicked.connect(self.transRes)
        
    def transReq(self):
        try:
            model=self.modelName_1
            classname=self.classNameEdit.text()
            classname=str(classname)
            reqData=self.protoInfo[1]
            result=transProto().transRequest(reqData, model, classname)
            self.textBrowser.setText(result)
        except Exception, e:
            print e
            print traceback.format_exc()
            f=open('log.txt', 'w')
            #f.write(e)
            f.write(traceback.format_exc())
            f.close()
        
    def chooseFile(self):
        dlg = PyQt4.QtGui.QFileDialog(self)
        filename = dlg.getOpenFileName(self, self.tr('choose proto file'), '', self.tr("proto Files (*.proto)"))
        fn = str(filename)
        self.fileNameEdit.setText(fn)
        path=fn.split('/')
        fileName=path[len(path)-1]
        modelName=fileName.split('.')[0]
        self.modelName_1=modelName+'_pb2'
        lenOfName=len(path[len(path)-1])
        filePath=fn[:len(fn)-lenOfName]
        ok=commands.getoutput('protoc -I=%s --python_out=. %s'%(filePath, fn))
        if ok:
            QtGui.QMessageBox.information(self, 'Information', self.tr(ok))
            
    def transRes(self):
        try:
            model=self.modelName_2
            classname=self.classNameEdit_2.text()
            classname=str(classname)
            resData=self.protoInfo[2]
            result=transProto().transResponse(resData, model, classname)
            self.responseBrowser.setText(result)
        except Exception, e:
            print e
            print traceback.format_exc()
            f=open('log.txt', 'w')
            #f.write(e)
            f.write(traceback.format_exc())
            f.close()
            
    def chooseFile_2(self):
        dlg = PyQt4.QtGui.QFileDialog(self)
        filename = dlg.getOpenFileName(self, self.tr('choose proto file'), '', self.tr("proto Files (*.proto)"))
        fn = str(filename)
        self.fileNameEdit_2.setText(fn)
        path=fn.split('/')
        fileName=path[len(path)-1]
        modelName=fileName.split('.')[0]
        self.modelName_2=modelName+'_pb2'
        lenOfName=len(path[len(path)-1])
        filePath=fn[:len(fn)-lenOfName]
        ok=commands.getstatus('protoc -I=%s --python_out=. %s'%(filePath, fn))
        if ok==0:
            QtGui.QMessageBox.information(self, 'Information', self.tr(ok))
            
    def start_threads(self):
        try:
            if self.thread.isAlive == True:
                QtGui.QMessageBox.information(self, 'Information', self.tr('proxy has already started'))
            else:
                self.thread.start()
                self.thread.isAlive=True
        except:
            self.thread = MyThread(self)
            self.thread.trigger.connect(self.update_tree)
            self.thread.setup('', 8000)
            self.thread.start()
            self.thread.isAlive=True
    
    def stop_threads(self):
        try:
            if self.thread.isAlive == True:
                self.thread.isAlive = False
            else:
                QtGui.QMessageBox.information(self, 'Information', self.tr('there is no proxy server started'))
        except:
            QtGui.QMessageBox.information(self, 'Information', self.tr('there is no proxy server started'))
    
    def clear(self):
        self.treeWidget.clear()
        self.hostList=[]
        self.nodeList=[]
        self.textBrowser.setText('')
        self.responseBrowser.setText('')
        
    def update_tree(self, req_data, data, url):
        response=data.split('\n\r\n')
        res_data=response[1]
        path=url.split('/')
        if len(path)>3:
            for i in range(3, len(path)):
                path[2]+=path[i]
            self.dealTree(3, path, req_data, res_data)
        elif len(path)==1:
            path.append('default')
            self.dealTree(2, path, req_data, res_data)
        elif len(path)==2:
            self.dealTree(2, path, req_data, res_data)
        elif len(path)==3:
            self.dealTree(3, path, req_data, res_data)
    
    def dealTree(self, count, path, req_data, data):
        if count==2:
            for host in self.hostList:
                if host[0].text(0)==path[0]:
                    curNode=host[0]
                    newNode=QTreeWidgetItem(curNode)
                    newNode.setText(0, path[1])
                    return
            curNode=QTreeWidgetItem(self.treeWidget)
            curNode.setText(0, path[0])
            newNode=QTreeWidgetItem(curNode)
            newNode.setText(0, path[1])
            self.hostList.append([curNode,None])
            self.nodeList.append([newNode, req_data, data])
            return
        if count==3:
            hasHost=None
            for host in self.hostList:
                if host[0].text(0)==path[0]:
                    hasHost=host[0]
                    if host[1]!=None:
                        if host[1].text(0)==path[1]:
                            curNode=host[1]
                            newNode=QTreeWidgetItem(curNode)
                            newNode.setText(0, path[2])
                            self.nodeList.append([newNode, req_data, data])
                            return
            if hasHost:
                curNode=QTreeWidgetItem(hasHost)
                curNode.setText(0, path[1])
                newNode=QTreeWidgetItem(curNode)
                newNode.setText(0, path[2])
                self.hostList.append([hasHost, curNode])
                self.nodeList.append([newNode, req_data, data])
                return
            else:
                hasHost=QTreeWidgetItem(self.treeWidget)
                hasHost.setText(0, path[0])
                curNode=QTreeWidgetItem(hasHost)
                curNode.setText(0, path[1])
                newNode=QTreeWidgetItem(curNode)
                newNode.setText(0, path[2])
                self.hostList.append([hasHost, curNode])
                self.nodeList.append([newNode, req_data, data])
                return
        return
    
    def onTreeItemSelect(self, item, column):
        for node in self.nodeList:
            if node[0]==item:
                self.protoInfo=node
                self.textBrowser.setText(node[1])
                self.responseBrowser.setText(node[2])

class transProto():
        def transRequest(self, request, model, className):
            from pb2py import PBMsgHeader_pb2
            reload(PBMsgHeader_pb2)
            importStr='import '+model
            reloadStr='reload('+model+')'
            exec(importStr)
            exec(reloadStr)
            initStr='requestData='+model+'.'+className+'()'
            exec(initStr)
            requestHeader=PBMsgHeader_pb2.PBMsgHeader()
            request=urllib.unquote(request)
            request=request.split('&')
            for data in request:
                key=data.split('=')[0]
                value=data.split('=')[1]
                if key=='data':
                    b64data=value.replace('%3d', '=').replace('%2f', '/').replace('%2b', '+')
                elif key=='header':
                    b64header=value.replace('%3d', '=').replace('%2f', '/').replace('%2b', '+')
            serializedData=base64.b64decode(b64data)
            serializedHeader=base64.b64decode(b64header)
            requestData.ParseFromString(serializedData)
            requestHeader.ParseFromString(serializedHeader)
            stringData=requestData.__str__()
            stringHeader=requestHeader.__str__()
            return '<HEADER>\n'+stringHeader+'\n<DATA>\n'+stringData
            
        def transResponse(self, response, model, className):
            from pb2py import PBMsgResponse_pb2
            importStr='import '+model
            reloadStr='reload('+model+')'
            exec(importStr)
            exec(reloadStr)
            responseObj=PBMsgResponse_pb2.PBMsgResponse()
            try:
                responseObj.ParseFromString(response)
            except:
                return response
            if responseObj.ok==False:
                return 'OK:'+str(responseObj.ok)+'\nerror_code:'+str(responseObj.error_code)+'\nmsg:'+responseObj.msg
            else:
                responseData=responseObj.data
            initStr='data='+model+'.'+className+'()'
            exec(initStr)
            data.ParseFromString(responseData)
            stringData=data.__str__()
            return stringData
            
if __name__=='__main__':
    app=QtGui.QApplication(sys.argv)
    myapp=MainWindow()
    myapp.show()
    sys.exit(app.exec_())
