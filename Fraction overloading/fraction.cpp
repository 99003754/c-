#include "fraction.h"

Fraction::Fraction():m_num(0),m_den(0)
{

}

Fraction::Fraction(int x,int y):m_num{x},m_den{y}
{}

Fraction::Fraction(int n):m_num{n}
{

}

Fraction Fraction::operator+(const Fraction &obj)
{
Fraction result;        
	result.m_num = m_num + obj.m_num;
	result.m_den = m_den + obj.m_den;
	return result;
}

Fraction Fraction::operator-(const Fraction &obj)
{
Fraction result;        
	result.m_num = m_num - obj.m_num;
	result.m_den = m_den - obj.m_den;
	return result;
}

Fraction Fraction:: operator*(const Fraction &obj)
{
Fraction result;        
	result.m_num = m_num * obj.m_num;
	result.m_den = m_den * obj.m_den;
	return result;
}

Fraction Fraction:: operator+(int n)
{       
	m_num = m_num + n;
	return m_num;
}

Fraction Fraction:: operator-(int n)
{       
	m_num = m_num - n;
	return m_num;
}



bool Fraction::operator==(const Fraction &obj)
{
if(m_num==obj.m_num && m_den==obj.m_den)
{
return true;
}
else
{
return false;
}
}

bool Fraction::operator<(const Fraction &obj)
{
if(m_num<obj.m_num && m_den<obj.m_den)
{
return true;
}
else
{
return false;
}
}

bool Fraction::operator>(const Fraction &obj)
{
if(m_num>obj.m_num && m_den>obj.m_den)
{
return true;
}
else
{
return false;
}
}

double Fraction::simplify()
{
    double i;
    i = m_num/m_den ;
    return i;
}

/*
bool Fraction::issimplest(const)
{
if(m_num<obj.m_num && m_den<obj.m_den)
{
return true;
}
else
{
return false;
}
}
*/

void Fraction::print()const
 { cout << m_num << " + i" << m_den << endl; }






