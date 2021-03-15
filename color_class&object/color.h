#ifndef COLOR_H
#define COLOR_H
#include<iostream>
#include<math.h>
using namespace std;
#include<string.h>
class color{
public:
int m_r;
int m_g;
int m_b;
color();
color(int red,int green,int blue);
color(std::string str);
color(int col[3]);
void invert();
int display();
};


#endif // COLOR_H
