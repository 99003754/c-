#include "rectangle.h"


rectangle::rectangle(int l,int b):polygon(l,b),m_len (l),m_bre(b)
{
}

int rectangle :: area() const
{
  return (m_len * m_bre);
}

int rectangle::l1()
{
    return m_len;
}
int rectangle::l2()
{
    return m_bre;
}
int rectangle ::circum() const {
  return (2 * (m_len + m_bre));}