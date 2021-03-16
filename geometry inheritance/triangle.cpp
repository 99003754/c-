#include "triangle.h"


triangle::triangle(int b,int h):polygon(b,h),m_bas(b),m_hei(h)
{}

int triangle :: area() const
{
  return (0.5 * m_bas * m_hei);
}

int triangle ::circum() const {
  return (m_bas + m_bas + m_bas);}

  int triangle::b1()
{
   
    return (m_bas);
}
int triangle::b2()
{
 
    return (m_hei);
}