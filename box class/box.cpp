#include "box.h"

Box::Box():m_length(0),m_breadth(0),m_height(0)
{}

Box::Box(int l, int b, int h)
        : m_length{ l }, m_breadth{ b }, m_height{ h } 
    {
    }

Box::Box(int x) 
        : m_length{ x }
    {
    }

Box::Box(const Box& b)
    {
        m_length = b.m_length;
        m_breadth = b.m_breadth;
        m_height = b.m_height;
    }

int Box::length() const
    {
        return m_length;
    }

int Box::breadth() const
    {
        return m_breadth;
    }

int Box::height() const
    {
        return m_height;
    }
int Box::volume() const
    {
        return (m_length*m_breadth*m_height);
    }
void Box::display()
{
        std::cout<<"Length = "<<m_length<<"\tBreadth = "<<m_breadth<<"\theight ="<<m_height<<endl;
}


