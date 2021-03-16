#include"employ.h"
class engineer:public employee{
int m_projcode;
double pay;
public:
engineer(std::string id,std::string name,double salary,int exp,int code);

void payroll();
void appraisal();
void display();
int codde();

};
