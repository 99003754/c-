#include "image.h"

Image::Image():m_x(0),m_y(0),m_width(0),m_height(0)
{}

Image::Image(int x, int y, int w,int h)
        : m_x{ x }, m_y{ y }, m_width{ w },m_height{ h } 
    {
    }

Image::Image(const Image& b)
    {
        m_x = b.m_x;
        m_y = b.m_y;
        m_width = b.m_width;
        m_height = b.m_height;
    }


int Image::move(int x,int y) 
    {
        m_x = x;
        m_y = y;
        // meaning image is rotated
        return 1;
    }

int Image::scale(int z) 
    {
        m_x *= z;
        m_y *= z;
        m_width *= z;
        m_height *= z;
        // meaning image is magnified by a factor of z
        return 1;
    }

int Image::resize(int w,int h) 
    {
        m_width = w;
        m_height = h;
        // meaning image resized to w and h
        return 1;
    }
void Image::display()
{
        std::cout<<"X - "<<m_x<<"\tY - "<<m_y<<"\t Width -"<<m_width<<"\t height ="<<m_height<<endl;
}

