#include"employ.h"
employee::employee(std::string id,std::string name,double salary,int exp):m_empid(id),m_name(name),m_salary(salary),m_exp(exp)
{
}
void employee::display()
{
cout<<"id"<<m_empid<<endl;
}
std::string employee::idd()
{
return m_empid;
}
std::string employee::namee()
{
return m_name;
}
double employee::salaryy()
{
return m_salary;
}
int employee::expp()
{
return m_exp;
}
