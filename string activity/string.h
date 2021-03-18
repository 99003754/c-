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

   char* m_s;
   int length;


   public:
   mystring();
   mystring(char*);
   mystring(const mystring&);

    int checkstring(char* strin) const;
    char* getstr(); 
    char* update(char*);
	   

bool operator==(const mystring &obj);
bool operator<(const mystring &obj);
bool operator>(const mystring &obj);

mystring operator+(const mystring &obj);
mystring operator=(const mystring &obj);
mystring operator+(char*);
mystring operator=(char*);
~mystring() {delete m_s; }

};

#endif

