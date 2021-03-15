#ifndef FRACTION_H
#define FRACTION_H

#include<iostream>
using namespace std;

class Fraction{
public:
int m_num;
int m_den;

Fraction();
Fraction(int x,int y);
Fraction(int);

Fraction operator+(const Fraction &obj);
Fraction operator-(const Fraction &obj);
Fraction operator*(const Fraction &obj);

Fraction operator+(int);
Fraction operator-(int);

bool operator==(const Fraction &obj);
bool operator<(const Fraction &obj);
bool operator>(const Fraction &obj);


double simplify();
//bool issimplest() const;

void print()const;

};


#endif