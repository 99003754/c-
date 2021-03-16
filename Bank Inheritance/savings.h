#ifndef SAVINGS_H
#define SAVINGS_H
#include"bank.h"

class savings:public accbase{
double s_balance;
public:

savings(std::string s_no,std::string s_name,double s_balance);

void debit(double remove);
void credit(double add);
void display()const;
};


#endif // SAVINGS_H

