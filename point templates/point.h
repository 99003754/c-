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
template<typename T>
class point{
T x;
T y;
public:
point();
point(T X,T Y);
double distancee();
quadrant quad();
void display();
};
