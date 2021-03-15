#include "customer.h"

Customer::Customer():m_custId(0),m_custName(0),m_phone(0),m_balance(0)
{}


Customer::Customer(string s1, string s2, string s3,double d)
        : m_custId{ s1 }, m_custName{ s2 }, m_phone{ s3 },m_balance{ d} 
    {
    }

    Customer::Customer(string s11, string s22, string s33)
        : m_custId{ s11 }, m_custName{ s22 }, m_phone{ s33 } 
    {
    }
Customer::Customer(const Customer &c)
{
m_custId = c.m_custId;
m_custName = c.m_custName;
m_phone = c.m_phone;
m_balance = c.m_balance;

}
int Customer::credit(double b)
{
   m_balance += b;
   return m_balance;
}

int Customer::makeCall(double b)
{
   if(m_balance>0)
   return 1; // can make a call
   else 
   return 0; // cannot make a call
   
}

double Customer::getBalance()const 
{ 
    return m_balance;
}


void Customer::display()const
{
cout<<"Customer ID :"<<m_custId<<"\t Customer Name :"<<m_custName<<"\t Phone number:"<<m_phone<<"\t Balance :"<<m_balance<<endl;
}
