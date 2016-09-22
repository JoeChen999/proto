# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '/Users/chenbiao/Documents/proto/mainWindow.ui'
#
# Created: Tue Apr 22 15:38:02 2014
#      by: PyQt4 UI code generator 4.10.2
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    def _fromUtf8(s):
        return s

try:
    _encoding = QtGui.QApplication.UnicodeUTF8
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig, _encoding)
except AttributeError:
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName(_fromUtf8("MainWindow"))
        MainWindow.resize(867, 668)
        self.centralwidget = QtGui.QWidget(MainWindow)
        self.centralwidget.setObjectName(_fromUtf8("centralwidget"))
        self.treeWidget = QtGui.QTreeWidget(self.centralwidget)
        self.treeWidget.setGeometry(QtCore.QRect(10, 40, 301, 581))
        self.treeWidget.setObjectName(_fromUtf8("treeWidget"))
        self.tabWidget = QtGui.QTabWidget(self.centralwidget)
        self.tabWidget.setGeometry(QtCore.QRect(320, 10, 531, 611))
        self.tabWidget.setObjectName(_fromUtf8("tabWidget"))
        self.tab = QtGui.QWidget()
        self.tab.setObjectName(_fromUtf8("tab"))
        self.textBrowser = QtGui.QTextBrowser(self.tab)
        self.textBrowser.setGeometry(QtCore.QRect(0, 0, 521, 511))
        self.textBrowser.setObjectName(_fromUtf8("textBrowser"))
        self.label = QtGui.QLabel(self.tab)
        self.label.setGeometry(QtCore.QRect(10, 520, 71, 21))
        self.label.setObjectName(_fromUtf8("label"))
        self.fileNameEdit = QtGui.QLineEdit(self.tab)
        self.fileNameEdit.setGeometry(QtCore.QRect(90, 520, 361, 21))
        self.fileNameEdit.setObjectName(_fromUtf8("fileNameEdit"))
        self.fileBrowserButton = QtGui.QPushButton(self.tab)
        self.fileBrowserButton.setGeometry(QtCore.QRect(450, 510, 71, 41))
        self.fileBrowserButton.setObjectName(_fromUtf8("fileBrowserButton"))
        self.label_2 = QtGui.QLabel(self.tab)
        self.label_2.setGeometry(QtCore.QRect(10, 555, 81, 21))
        self.label_2.setObjectName(_fromUtf8("label_2"))
        self.classNameEdit = QtGui.QLineEdit(self.tab)
        self.classNameEdit.setGeometry(QtCore.QRect(90, 550, 181, 22))
        self.classNameEdit.setObjectName(_fromUtf8("classNameEdit"))
        self.translateButton = QtGui.QPushButton(self.tab)
        self.translateButton.setGeometry(QtCore.QRect(280, 541, 241, 41))
        font = QtGui.QFont()
        font.setPointSize(21)
        self.translateButton.setFont(font)
        self.translateButton.setFocusPolicy(QtCore.Qt.NoFocus)
        self.translateButton.setContextMenuPolicy(QtCore.Qt.DefaultContextMenu)
        self.translateButton.setObjectName(_fromUtf8("translateButton"))
        self.tabWidget.addTab(self.tab, _fromUtf8(""))
        self.tab_2 = QtGui.QWidget()
        self.tab_2.setObjectName(_fromUtf8("tab_2"))
        self.responseBrowser = QtGui.QTextBrowser(self.tab_2)
        self.responseBrowser.setGeometry(QtCore.QRect(0, 0, 521, 511))
        self.responseBrowser.setObjectName(_fromUtf8("responseBrowser"))
        self.label_3 = QtGui.QLabel(self.tab_2)
        self.label_3.setGeometry(QtCore.QRect(10, 520, 71, 21))
        self.label_3.setObjectName(_fromUtf8("label_3"))
        self.fileNameEdit_2 = QtGui.QLineEdit(self.tab_2)
        self.fileNameEdit_2.setGeometry(QtCore.QRect(90, 520, 361, 21))
        self.fileNameEdit_2.setObjectName(_fromUtf8("fileNameEdit_2"))
        self.classNameEdit_2 = QtGui.QLineEdit(self.tab_2)
        self.classNameEdit_2.setGeometry(QtCore.QRect(90, 550, 181, 22))
        self.classNameEdit_2.setObjectName(_fromUtf8("classNameEdit_2"))
        self.label_4 = QtGui.QLabel(self.tab_2)
        self.label_4.setGeometry(QtCore.QRect(10, 555, 81, 21))
        self.label_4.setObjectName(_fromUtf8("label_4"))
        self.translateButton_2 = QtGui.QPushButton(self.tab_2)
        self.translateButton_2.setGeometry(QtCore.QRect(280, 541, 241, 41))
        font = QtGui.QFont()
        font.setPointSize(21)
        self.translateButton_2.setFont(font)
        self.translateButton_2.setFocusPolicy(QtCore.Qt.NoFocus)
        self.translateButton_2.setContextMenuPolicy(QtCore.Qt.DefaultContextMenu)
        self.translateButton_2.setObjectName(_fromUtf8("translateButton_2"))
        self.fileBrowserButton_2 = QtGui.QPushButton(self.tab_2)
        self.fileBrowserButton_2.setGeometry(QtCore.QRect(450, 510, 71, 41))
        self.fileBrowserButton_2.setObjectName(_fromUtf8("fileBrowserButton_2"))
        self.tabWidget.addTab(self.tab_2, _fromUtf8(""))
        self.startButton = QtGui.QPushButton(self.centralwidget)
        self.startButton.setGeometry(QtCore.QRect(0, 10, 71, 32))
        self.startButton.setObjectName(_fromUtf8("startButton"))
        self.stopButton = QtGui.QPushButton(self.centralwidget)
        self.stopButton.setGeometry(QtCore.QRect(60, 10, 71, 32))
        self.stopButton.setObjectName(_fromUtf8("stopButton"))
        self.clearButton = QtGui.QPushButton(self.centralwidget)
        self.clearButton.setGeometry(QtCore.QRect(210, 10, 101, 32))
        self.clearButton.setObjectName(_fromUtf8("clearButton"))
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtGui.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 867, 22))
        self.menubar.setObjectName(_fromUtf8("menubar"))
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtGui.QStatusBar(MainWindow)
        self.statusbar.setObjectName(_fromUtf8("statusbar"))
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)
        self.tabWidget.setCurrentIndex(1)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(_translate("MainWindow", "protobuf proxy", None))
        self.treeWidget.headerItem().setText(0, _translate("MainWindow", "proxy list", None))
        self.label.setText(_translate("MainWindow", "  proto file:", None))
        self.fileBrowserButton.setText(_translate("MainWindow", "browse", None))
        self.label_2.setText(_translate("MainWindow", "class name:", None))
        self.translateButton.setText(_translate("MainWindow", "translate", None))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab), _translate("MainWindow", "Request", None))
        self.label_3.setText(_translate("MainWindow", "  proto file:", None))
        self.label_4.setText(_translate("MainWindow", "class name:", None))
        self.translateButton_2.setText(_translate("MainWindow", "translate", None))
        self.fileBrowserButton_2.setText(_translate("MainWindow", "browse", None))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_2), _translate("MainWindow", "Response", None))
        self.startButton.setText(_translate("MainWindow", "start", None))
        self.stopButton.setText(_translate("MainWindow", "stop", None))
        self.clearButton.setText(_translate("MainWindow", "clear", None))


if __name__ == "__main__":
    import sys
    app = QtGui.QApplication(sys.argv)
    MainWindow = QtGui.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())

