#include"complex.h"
complex::complex()
{
cout<<"default ctr"<<endl;
}

complex::complex(int x,int y):m_real(x),m_imag(y)
{}
//complex(int)
complex complex::operator+(const complex &obj)
{
complex result;        
	result.m_real = m_real + obj.m_real;
	result.m_imag = m_imag + obj.m_imag;
	return result;
}
complex complex::operator-(const complex &obj)
{
complex result;        
	result.m_real = m_real - obj.m_real;
	result.m_imag = m_imag - obj.m_imag;
	return result;
}
complex& complex:: operator++()
{
++m_real;
++m_imag;
return *this;
}
complex complex:: operator*(const complex &obj)
{
complex result;        
	result.m_real = m_real * obj.m_real;
	result.m_imag = m_imag * obj.m_imag;
	return result;
}
bool complex::operator==(const complex &obj)
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
complex complex:: operator++(int i)
{
complex orig(*this);
m_real++;
m_imag++;
return orig;
}
//complex& operator++();
void complex::print()const
 { cout << m_real << " + i" << m_imag << endl; }







