#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "polygon.h"

class triangle:public polygon{

int m_bas;
int m_hei; // taking other 2 sides of triangle of same length as bas

public:


triangle(int b,int h);
int area() const;
int circum() const; //perimeter
int b1();
int b2();
};

#endif