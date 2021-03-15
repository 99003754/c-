#include<iostream>
using namespace std;
class complex{
public:
int m_real;
int m_imag;
complex();
complex(int x,int y);
complex operator+(const complex &obj);
complex operator-(const complex &obj);
complex operator*(const complex &obj);
bool operator==(const complex &obj);
complex operator++(int i);
void print()const;
complex& operator++();
};
