#include"point.h"
template<typename T>
point<T>::point():x(0),y(0)
{}
template<typename T>
point<T>::point(T X,T Y):x(X),y(Y)
{}
template<typename T>
double point<T>::distancee()
{
double squarex=pow(x,2);
double squarey=pow(y,2);
double distance=sqrt(x+y);
return distance;
}
template<typename T>
quadrant point<T>::quad()
{
if(x>0 && y>0)
{
return q1;
}
else if(x<0 && y>0)
{
return q2;
}
else if(x<0 && y<0)
{
return q3;
}
else if(x>0 && y<0)
{
return q4;
}
else
{
return o;
}
}
template<typename T>
void point<T>::display()
{
cout<<"x = "<<x<<" ,y = "<<y<<endl;
}
int main()
{
point<int> p(1,2);
cout<<p.quad()<<endl;
cout<<p.distancee()<<endl;
}

