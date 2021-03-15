#include"pointh.h"
point::point():x(0),y(0)
{}
point::point(int a,int b):x(a),y(b)
{}
point::point(const point &copy)
{
x=copy.x;
y=copy.y;
}
double point::distancefromorigin()
{
double squarex=pow(x,2);
double squarey=pow(y,2);
double distance=sqrt(x+y);
return distance;
}
quadrant point::quad()const
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
bool point::isorigin()const
{
if(x==0 & y==0)
{
return true;
}
return false;
}

bool point::isonxaxis()const
{
if(x==0)
{
return true;
}
return false;
}
bool point::isonyaxis()const
{
if(y==0)
{
return true;
}
return false;
}
void point::display()const
{
cout<<"x = "<<x<<" ,y = "<<y<<endl;
}

