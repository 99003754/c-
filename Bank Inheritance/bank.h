#ifndef BANK_H
#define BANK_H
#include<iostream>
using namespace std;

class accbase{
protected:
std::string accno;
std::string accname;
double m_balance;
public:
accbase(std::string no,std::string name,double balance);
accbase(const accbase &copy);
virtual void debit(double remove)=0;
virtual void credit(double add)=0;
virtual void display() const=0;
double getBalance() const;
std::string number();
std::string name();
double bal();
};

#endif // BANK_H
