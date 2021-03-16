#include "savings.h"


 Savings::Savings(std::string d1_no,std::string d1_name,double d1_balance):Account(d1_no,d1_name)
{
}

Savings::Savings(std::string d1_no,std::string d1_name):Account(d1_no,d1_name,d1_balance)
{
}
void Savings:: debit(double r)
{
    b_balance -= r;

}

void Savings:: credit(double a)
{
    b_balance += a;

}
void Savings::display()const
{
    cout<<"Account No :"<<b_accno<<"\t Name :"<<b_accname<<"\t Balance :"<<b_balance<<endl;
}
