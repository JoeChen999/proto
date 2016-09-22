import sys
from PyQt4 import QtGui, QtCore
import time
import random
import socket
import urlparse
import httplib  
  
class Main(QtGui.QMainWindow):
    def __init__(self, parent=None):
        super(Main, self).__init__(parent)
        self.text_area = QtGui.QTextBrowser()
        self.thread_button = QtGui.QPushButton('Start threads')
        self.thread_button.clicked.connect(self.start_threads)
  
        central_widget = QtGui.QWidget()
        central_layout = QtGui.QHBoxLayout()
        central_layout.addWidget(self.text_area)
        central_layout.addWidget(self.thread_button)
        central_widget.setLayout(central_layout)
        self.setCentralWidget(central_widget)
        
  
    def start_threads(self):
        if self.isrun==False:
            self.thread = MyThread(self)    # create a thread
            self.thread.trigger.connect(self.update_text)  # connect to it's signal
            self.thread.setup('', 8000)            # just setting up a parameter
            self.thread.start()             # start the thread
            self.thread.isAlive=True
        else:
            self.thread.isAlive=False
            self.isrun=False
  
    def update_text(self, thread_no):
        self.text_area.append('%s' % thread_no)
    
if __name__ == '__main__':
    app = QtGui.QApplication(sys.argv)
  
    mainwindow = Main()
    mainwindow.show()
  
    sys.exit(app.exec_())
