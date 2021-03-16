#ifndef POLYGON_H
#define POLYGON_H

#include "ishape.h"

class polygon:public SHAPE
{
int m_side1;
int m_side2;

public:
polygon(int n1,int n2);

public:
 virtual int area() const = 0;
 virtual int circum() const = 0;

};

#endif