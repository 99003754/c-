#ifndef DISTANCE_H
#define DISTANCE_H

#include<iostream>
using namespace std;

class Distance{
public:
int m_feets;
int m_inches;

Distance();
Distance(int x,int y);
Distance(int);

Distance operator+(const Distance &obj);
Distance operator-(const Distance &obj);

Distance operator+(int);
Distance operator-(int);


bool operator==(const Distance &obj);
bool operator<(const Distance &obj);
bool operator>(const Distance &obj);

Distance operator++(int i);
Distance& operator++();

void print()const;
};



#endif