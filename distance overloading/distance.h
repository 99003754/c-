#include<iostream>
using namespace std;
class distance1{

public:
int m_feets;
int m_inches;
distance1();
distance1(int x,int y);
distance1 operator+(const distance1 &obj);
distance1 operator-(const distance1 &obj);
distance1 operator++(int );
bool operator==(const distance1 &obj);
bool operator<(const distance1 &obj);
bool operator>(const distance1 &obj);
void display()const;
distance1& operator++();
std::ostream& operator<<(std::ostream &rout,const distance &ref);
std::istream& operator>>(std::istream &rin,const distance &ref);
};
