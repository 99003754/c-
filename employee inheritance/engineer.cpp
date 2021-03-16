#include"engineer.h"
engineer::engineer(std::string id,std::string name,double salary,int exp,int code):employee(id,name,salary,exp)
{
m_projcode=code;
}
void engineer::payroll()
{
m_salary+=5000;
}
void engineer::appraisal()
{
m_salary+=5000;
}
void engineer::display()
{
cout<<"id"<<m_empid;
}
int engineer::codde()
{
return m_projcode;
}
