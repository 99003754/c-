#include"current.h"
curr::curr(std::string c_no,std::string c_name,double c_balance):accbase(c_no,c_name,c_balance)
{
}
void curr::debit(double remove)
{
m_balance-=remove;
}

void curr::credit(double add)
{
m_balance+=add;
}
void curr::display()const
{
cout<<"current acc"<<endl;
cout<<"acc holder name "<<accname<<endl;
cout<<"acc holder no "<<accno<<endl;
cout<<"balance "<<m_balance<<endl;
}
