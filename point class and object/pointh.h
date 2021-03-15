#ifndef POINTH_H
#define POINTH_H
#include<iostream>
#include<math.h>
using namespace std;
enum quadrant{
q1,
q2,
q3,
q4,
o
};
class point{
public:
int x;
int y;
point();
point(int a,int b);
point(const point &copy);
double distancefromorigin();
quadrant quad()const;
bool isorigin()const;
bool isonxaxis()const;
bool isonyaxis()const;
void display()const;
};
#endif // POINTH_H
