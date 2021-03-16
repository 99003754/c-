#ifndef CURRENT_H
#define CURRENT_H
#include"bank.h"

class curr:public accbase{
double s_balance;
public:

curr(std::string c_no,std::string c_name,double c_balance);

void debit(double remove);
void credit(double add);
void display()const;
};


#endif // SAVINGS_H

