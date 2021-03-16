#include"employee.h"

class employee:public IEmployee{
protected:
std::string m_empid;
std::string m_name;
double m_salary;
int m_exp;
public:
employee(std::string id,std::string name,double salary,int exp);
virtual void display();
std::string idd();

std::string namee();

double salaryy();

int expp();

};
