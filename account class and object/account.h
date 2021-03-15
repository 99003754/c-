#include<iostream>
using namespace std;
class acc{
public:
std::string accno;
std::string accname;
double balance;
acc();
acc(std::string no,std::string name);
acc(std::string no,std::string name,double bal);
acc(const acc &copy);
void debit(double remove);
void credit(double add);
double getbalance() const;
void display() const;
};

