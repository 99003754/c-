#ifndef COLOR_H
#define COLOR_H
#include<iostream>
#include<math.h>
using namespace std;
#include<string.h>
class colorr{
public:
int m_r;
int m_g;
int m_b;
colorr();
colorr(int ,int ,int );
colorr(std::string str);
colorr(int col[3]);
void invert();
int display();
};


#endif // COLOR_H
