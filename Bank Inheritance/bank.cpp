#include "bank.h"

accbase::accbase(std::string no,std::string name,double balance):accno(no),accname(name),m_balance(balance)
{

}

accbase::accbase(const accbase &copy)
{
accno=copy.accno;
accname=copy.accname;
m_balance=copy.m_balance;
}



double accbase::getBalance() const
{
return m_balance;
}
std::string accbase::number()
{
    return accno;
}
std::string accbase::name()
{
   return accname;
}
double accbase::bal()
{
    return m_balance;
}
