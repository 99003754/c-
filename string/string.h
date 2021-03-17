/**
 * @file string.h
 * @author A H Aruna (a.aruna@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _MYSTRING_H
#define _MYSTRING_H

#include <iostream>
#include "string.h"
#include <cstring>
using namespace std;
class mystring
{
  public:
    char* m_s;
   int length;


   mystring();
   mystring(const char*);
   mystring(const mystring&);

    int getstr(char* strin) const;
    
  //char* getstr() const; 
	   

bool operator==(const mystring &obj);
bool operator<(const mystring &obj);
bool operator>(const mystring &obj);

mystring operator+(const mystring &obj);
mystring operator+(char*);
~mystring() {delete m_s; }

};

#endif

