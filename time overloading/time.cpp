#include"time.h"

mytime::mytime()
{
cout<<"default constructor"<<endl;
}

mytime::mytime(int x,int y,int z):m_hours(x),m_mins(y),m_secs(z)
{}

mytime::mytime(int h,int m):m_hours(h),m_mins(m),m_secs(0)
{}

mytime mytime::operator+(const mytime &obj)
{
mytime result;
	result.m_hours=m_hours+obj.m_hours;
	result.m_mins=m_mins+obj.m_mins;
	if(result.m_mins>60);
	{
	int dummy=result.m_mins/60;
	result.m_hours+=dummy;
	result.m_mins=result.m_mins-(dummy*60);
	}
	result.m_secs=m_secs+obj.m_secs;
	return result;
} 

mytime mytime:: operator-(const mytime &obj)
{
mytime result;
	result.m_hours=m_hours-obj.m_hours;
	result.m_mins=m_mins-obj.m_mins;
	result.m_secs=m_secs-obj.m_secs;
	return result;
}


mytime& mytime:: operator+=(const mytime &obj)
{
m_hours+=obj.m_hours;
m_mins+=obj.m_mins;
m_secs+=obj.m_secs;
}

bool mytime:: operator==(const mytime &obj)
{
if(m_hours==obj.m_hours && m_mins==obj.m_mins && m_secs==obj.m_secs)
{
return true;
}
else
{
return false;
}
}
mytime& mytime::operator++()
{
++m_hours;
++m_mins;
++m_secs;
return *this;
}
mytime mytime::operator++(int )
{
mytime orig(*this);
m_hours++;
m_mins++;
m_secs++;
return orig;
}

void mytime::display()const
{
cout<<"hh::mm::ss :"<<m_hours<<"::"<<m_mins<<"::"<<m_secs<<endl;
}

