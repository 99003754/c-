#ifndef IMAGE_H__
#define IMAGE_H__

#include <iostream>
using namespace std;

class Image
{
    public:
    int m_x;
    int m_y;
    int m_width;
    int m_height;

    public:
    Image();
    Image(int x,int y,int w,int h);
    Image(const Image&);

    int move(int,int);
    int scale(int);
    int resize(int,int);
    
    void display();
  
};

#endif