import sys
import os
import time
import ConfigParser
class Configini(ConfigParser.ConfigParser):
    def optionxform(self, optionstr):
        return optionstr
      
class ReadConfig:  
        def __init__(self, path):  
            self.path = path  
            self.cf = Configini()
            self.cf.read(self.path)  
        def showkey(self):    
            result=""
            try:
                result = self.cf.options("baseconf")
            except:
                result = ""
            return result
        def get(self, field, key):  
            result = ""  
            try:  
                result = self.cf.get(field, key)  
            except:  
                result = ""  
            return result  
        def set(self, field, key, value):  
            try:  
                self.cf.set(field, key, value)  
                self.cf.write(open(self.path,'w'))  
            except:  
                return False  
            return True  
        def showSections(self):
            result=""
            try:
                result = self.cf.sections()
            except:
                result = ""
            return result
        def removeOption(self, section, option):
            try:
                self.cf.remove_option(section, option)
                self.cf.write(open(self.path,'w'))
            except:
                return False
            return True
        def addSection(self, section):
            try:
                self.cf.add_section(section)
            except:
                return False
            return True
