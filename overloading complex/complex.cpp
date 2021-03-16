#include "complex.h"

Complex::Complex():m_real(0),m_imag(0)
{
}

Complex::Complex(int x,int y):m_real(x),m_imag(y)
{}

Complex::Complex(int x):m_real(x)
{}

Complex Complex::operator+(const Complex &obj)
{
Complex result;        
	result.m_real = m_real + obj.m_real;
	result.m_imag = m_imag + obj.m_imag;
	return result;
}
Complex Complex::operator-(const Complex &obj)
{
Complex result;        
	result.m_real = m_real - obj.m_real;
	result.m_imag = m_imag - obj.m_imag;
	return result;
}

Complex Complex::operator*(const Complex &obj)
{
Complex result;        
	result.m_real = m_real * obj.m_real;
	result.m_imag = m_imag * obj.m_imag;
	return result;
}

Complex Complex:: operator+(int n)
{       
	m_real = m_real + n;
	return m_real;
}

Complex Complex:: operator-(int n)
{       
	m_real = m_real - n;
	return m_real;
}


Complex& Complex:: operator++()
{
++m_real;
++m_imag;
return *this;
}

Complex Complex:: operator++(int i)
{
Complex orig(*this);
m_real++;
m_imag++;
return orig;
}

bool Complex::operator==(const Complex &obj)
{
if(m_real==obj.m_real && m_imag==obj.m_imag)
{
return true;
}
else
{
return false;
}
}


void Complex::print()const
 { cout << m_real << " + i" << m_imag << endl; }







