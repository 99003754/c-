#include"distance.h"
distance1::distance1(){
cout<<"default ctr"<<endl;
}
distance1 :: distance1(int x,int y):m_feets(x),m_inches(y)
{}



distance1 distance1 :: operator+(const distance1 &obj)
{
distance1 result;
	result.m_feets=m_feets+obj.m_feets;
	result.m_inches=m_inches+obj.m_inches;
	return result;
}

distance1 distance1 :: operator-(const distance1 &obj)
{
distance1 result;
	result.m_feets=m_feets-obj.m_feets;
	result.m_inches=m_inches-obj.m_inches;
	return result;
}

distance1 distance1 :: operator++(int )
{
distance1 orig(*this);
m_feets++;
m_inches++;

return orig;
}

bool distance1 :: operator==(const distance1 &obj)
{
if(m_feets==obj.m_feets && m_inches==obj.m_inches)
{
return true;
}
else
{
return false;
}
}
distance1& distance1 :: operator++()
{
++m_feets;
++m_inches;
return *this;
}

bool distance1::operator<(const distance1 &obj)
{
if(m_feets<obj.m_feets)
{
return true;
}
if(m_feets==obj.m_feets && m_inches<obj.m_inches)
{
return true;
}
return false;
}

bool distance1::operator>(const distance1 &obj)
{
if(m_feets>obj.m_feets)
{
return true;
}
if(m_feets==obj.m_feets && m_inches>obj.m_inches)
{
return true;
}
return false;
}
void distance1::display()const
{
cout<<"feets and inches "<<m_feets<<" "<<m_inches<<endl;
}




