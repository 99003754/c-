#include"manager.h"
manager::manager(std::string id,std::string name,double salary,int exp,int code,int n):employee(id,name,salary,exp)
{
m_projcode=code;
m_reportees=n;
}
void manager::payroll()
{
m_salary+=1000;
}
void manager::appraisal()
{
m_salary+=1000;
}
void manager::display()
{
cout<<"id"<<m_empid;
}
int manager::codee()
{
return m_projcode;
}
int manager::report()
{
return m_reportees;
}

