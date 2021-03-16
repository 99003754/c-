#ifndef CIRCLE_H
#define CIRCLE_H
#include "ishape.h"
#define PI 22/7
class circle:public SHAPE{

int m_radius;

public:
//const static double PI = 22.0/7.0;

circle(int r);
int area() const;
int circum() const;
int rad();
};

#endif