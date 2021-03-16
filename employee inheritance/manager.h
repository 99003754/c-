#include"employ.h"
class manager:public employee{
int m_projcode;
int m_reportees;
public:
manager(std::string id,std::string name,double salary,int exp,int code,int n);
void payroll();
void appraisal();
void display();
int codee();
int report();
};

