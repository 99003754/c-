#ifndef ISHAPE_H
#define ISHAPE_H
#include "iostream"
#include "string"

using namespace std;

class SHAPE
{
 public:
 virtual int area() const = 0;
 virtual int circum() const = 0;

};



#endif