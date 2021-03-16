#ifndef CREDIT_H
#define CREDIT_H
#include "bank.h"

class Credit:public Account
{  
 
    double d2_balance;
public:
    Credit(std::string d2_no,std::string d2_name,double d2_balance);
    Credit(std::string d11,std::string d22);

    void debit(double r);
    void credit(double a);
    void display() const;
};

#endif
