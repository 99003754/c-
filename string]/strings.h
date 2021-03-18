#ifndef STRINGS_H
#define STRINGS_H
#include<string.h>
#include<iostream>
using namespace std;
typedef enum{
    PASS,
    FAIL
}enum_t;
class mystring
{
private:
    char* array;
    size_t length;
public:
    mystring(); // mystring s1;
    mystring(const char*); // mystring s1("name");
    mystring(const mystring &obj); // mystring s2(s1);
    ~mystring();
    mystring operator=(const char *new_string);
    mystring operator=(const mystring &obj);
    bool operator==(const mystring &obj);
    mystring operator+(const mystring &obj);
    void display();
    enum_t stringcheck(const char *check_char);
    enum_t update(const char *new_string);



};


#endif // STRINGS_H
