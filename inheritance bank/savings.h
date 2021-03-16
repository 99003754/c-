#ifndef SAVINGS_H
#define SAVINGS_H
#include "bank.h"

class Savings:public Account
{  
 
    double d1_balance;
public:
    Savings(std::string d1_no,std::string d1_name,double d1_balance);
    Savings(std::string s11,std::string s22);

    void debit(double r);
    void credit(double a);
    void display() const;
};

#endif
