#ifndef BANK_H
#define BANK_H

#include <iostream>
#include<string>

using namespace std;
class Account
{
    public:
    std::string b_accno;
    std::string b_accname;
    double b_balance;

    Account();
    Account(std::string no,std::string name,double balance);
    Account(std::string s11,std::string s22);
    Account(const Account &a1);

     virtual void debit(double remove)=0;
     virtual void credit(double add)=0;
     virtual void display() const = 0;
     
     std::string number();
     std::string name();
     double bal();
   double getBalance() const;
};

#endif
