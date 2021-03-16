#include "savings.h"

savings::savings(std::string s_no,std::string s_name,double s_balance):accbase(s_no,s_name,s_balance)
{
}
void savings::debit(double remove)
{
m_balance-=remove;
}

void savings::credit(double add)
{
m_balance+=add;
}
void savings::display()const
{
cout<<"savings acc"<<endl;
cout<<"acc holder name "<<accname<<endl;
cout<<"acc holder no "<<accno<<endl;
cout<<"balance "<<m_balance<<endl;
}

