#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<math.h>
#include<cstring>

using namespace std;

enum AccountType{
    Prepaid,
    Postpaid
};

class Customer{

public:
std::string m_custId;
std::string m_custName;
std::string m_phone;
double m_balance;
//AccountType m_type;

Customer();
Customer(std::string s1,std::string s2,std::string s3,double d);
Customer(std::string s1,std::string s2,std::string s3);
Customer(const Customer &c);

int credit(double);
int makeCall(double);
double getBalance() const;
void display() const;
};


#endif // COLOR_H