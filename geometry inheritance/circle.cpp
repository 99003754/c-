#include "circle.h"


circle::circle(int r):m_radius(r)
{}
int circle::rad()
{
    return m_radius;
}
int circle :: area() const
{
  return (PI * m_radius * m_radius);
}

int circle ::circum() const {
  return (PI * 2.0 * m_radius);}