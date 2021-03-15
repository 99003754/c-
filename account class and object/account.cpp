#include"account.h"

acc::acc()
{}

acc::acc(std::string no,std::string name,double bal):accno(no),accname(name),balance(bal)
{
}
acc::acc(std::string no,std::string name):accno(no),accname(name)
{
}
acc::acc(const acc &copy)
{
accno=copy.accno;
accname=copy.accname;
balance=copy.balance;
}

void acc::debit(double remove)
{
balance-=remove;
}
void acc::credit(double add)
{
balance+=add;
}
double acc::getbalance() const
{
return balance;
}
void acc::display() const
{
cout<<"name "<<accname<<endl;
cout<<"acc no "<<accno<<endl;
cout<<"balance "<<balance<<endl;
}


