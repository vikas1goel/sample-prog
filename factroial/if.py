# -*- coding: utf-8 -*-
"""
Created on Sun Apr 21 02:19:45 2019

@author: kotiys
"""
def pp(age):
     if age >=3 and age <=6 :
        print("valid")
     else:
        print("invalid");
      
age=input("Enter age")
if age:    
    pp(int(age))
else:
    print("Again enter the value")        
    