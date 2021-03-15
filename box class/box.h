#ifndef BOX_H__
#define BoX_H__

#include <iostream>
using namespace std;

class Box
{
    public:
    int m_length;
    int m_breadth;
    int m_height;

    public:
    Box();
    Box(int l,int b,int h);
    Box(int x);
    Box(const Box&);

    int length() const;
    int breadth() const;
    int height() const;
    int volume() const;
    
    void display();
  
};

#endif