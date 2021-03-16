#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "polygon.h"

class rectangle:public polygon{

int m_len;
int m_bre;

public:
rectangle(int l,int b);
int area() const;
int circum() const; //perimeter
int l1();
int l2();
};

#endif