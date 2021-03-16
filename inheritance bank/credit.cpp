#include "credit.h"


 Credit::Credit(std::string d2_no,std::string d2_name,double d2_balance):Account(d2_no,d2_name,d2_balance)
{
}

Credit::Credit(std::string d2_no,std::string d2_name):Account(d2_no,d2_name)
{
}

void Credit:: debit(double r)
{
    b_balance -= r;

}

void Credit:: credit(double a)
{
    b_balance += a;

}
void Credit::display()const
{
    cout<<"Account No :"<<b_accno<<"\t Name :"<<b_accname<<"\t Balance :"<<b_balance<<endl;
}
