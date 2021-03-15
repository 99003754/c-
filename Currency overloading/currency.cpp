#include "currency.h"

Currency::Currency():m_rup(0),m_pai(0)
{

}

Currency::Currency(int x,int y):m_rup{x},m_pai{y}
{}

Currency::Currency(int n):m_rup{n}
{

}

Currency Currency::operator+(const Currency &obj)
{
Currency result;        
	result.m_rup = m_rup + obj.m_rup;
	result.m_pai = m_pai + obj.m_pai;
	return result;
}

Currency Currency::operator-(const Currency &obj)
{
Currency result;        
	result.m_rup = m_rup - obj.m_rup;
	result.m_pai = m_pai - obj.m_pai;
	return result;
}



Currency Currency:: operator+(int n)
{       
	m_rup = m_rup + n;
	return m_rup;
}

Currency Currency:: operator-(int n)
{       
	m_rup = m_rup - n;
	return m_rup;
}

Currency& Currency:: operator++()
{
++m_rup;
++m_pai;
return *this;
}

Currency Currency:: operator++(int i)
{
Currency orig(*this);
m_rup++;
m_pai++;
return orig;
}

bool Currency::operator==(const Currency &obj)
{
if(m_rup==obj.m_rup && m_pai==obj.m_pai)
{
return true;
}
else
{
return false;
}
}

bool Currency::operator<(const Currency &obj)
{
if(m_rup<obj.m_rup && m_pai<obj.m_pai)
{
return true;
}
else
{
return false;
}
}

bool Currency::operator>(const Currency &obj)
{
if(m_rup>obj.m_rup && m_pai>obj.m_pai)
{
return true;
}
else
{
return false;
}
}


void Currency::print()const
 { cout << m_rup << " + i" << m_pai << endl; }





