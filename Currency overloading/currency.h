#ifndef FRACTION_H
#define FRACTION_H

#include<iostream>
using namespace std;

class Currency{
public:
int m_rup;
int m_pai;

Currency();
Currency(int x,int y);
Currency(int);

Currency operator+(const Currency &obj);
Currency operator-(const Currency &obj);
Currency operator*(const Currency &obj);

Currency operator+(int);
Currency operator-(int);

Currency& operator++();
Currency operator++(int i);

bool operator==(const Currency &obj);
bool operator<(const Currency &obj);
bool operator>(const Currency &obj);


double simplify();
//bool issimplest() const;

void print()const;

};


#endif