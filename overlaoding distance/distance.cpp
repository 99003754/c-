#include "distance.h"

Distance::Distance():m_feets(0),m_inches(0)
{
}

Distance::Distance(int x,int y):m_feets(x),m_inches(y)
{}

Distance::Distance(int x):m_feets(x)
{}

Distance Distance::operator+(const Distance &obj)
{
Distance result;        
	result.m_feets = m_feets + obj.m_feets;
	result.m_inches = m_inches + obj.m_inches;
	return result;
}
Distance Distance::operator-(const Distance &obj)
{
Distance result;        
	result.m_feets = m_feets - obj.m_feets;
	result.m_inches = m_inches - obj.m_inches;
	return result;
}

Distance Distance:: operator+(int n)
{       
	m_feets = m_feets + n;
	return m_feets;
}

Distance Distance:: operator-(int n)
{       
	m_feets = m_feets - n;
	return m_feets;
}


Distance& Distance:: operator++()
{
++m_feets;
++m_inches;
return *this;
}

Distance Distance:: operator++(int i)
{
Distance orig(*this);
m_feets++;
m_inches++;
return orig;
}

bool Distance::operator==(const Distance &obj)
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

bool Distance::operator<(const Distance &obj)
{
if(m_feets<obj.m_feets && m_inches<obj.m_inches)
{
return true;
}
else
{
return false;
}
}

bool Distance::operator>(const Distance &obj)
{
if(m_feets>obj.m_feets && m_inches>obj.m_inches)
{
return true;
}
else
{
return false;
}
}



void Distance::print()const
 { cout << m_feets << " + i" << m_inches << endl; }







