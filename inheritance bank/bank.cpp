#include "bank.h"

Account::Account():b_accno(0),b_accname (0),b_balance(0)
{
}

Account::Account(std::string no,std::string name,double balance):b_accno(no),b_accname (name),b_balance (balance)
{
}

Account::Account(std::string s11,std::string s22):b_accno(s11),b_accname (s22)
    {
    }

Account::Account(const Account &a1)
    {
        b_accno = a1.b_accno;
        b_accname = a1.b_accname;
        b_balance = a1.b_balance;
    }

double Account::getBalance() const {
        return b_balance;}
        
   std::string Account::number()
   {
   return b_accno;
   }
   
     std::string Account::name()
   {
   return b_accname;
   }
   
     double Account::bal()
   {
   return b_balance;
   }
