#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>
using namespace std;

class Complex{
public:
int m_real;
int m_imag;

Complex();
Complex(int x,int y);
Complex(int);

Complex operator+(const Complex &obj);
Complex operator-(const Complex &obj);
Complex operator*(const Complex &obj);

Complex operator++(int i);
Complex& operator++();

Complex operator+(int);
Complex operator-(int);

bool operator==(const Complex &obj);

void print()const;
};



#endif
