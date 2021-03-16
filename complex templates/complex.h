#include<iostream>
using namespace std;
template<typename T>
class complex{
T m_real;
T m_imag;
public:
complex();
complex(T,T);
void display();
friend std::ostream& operator<<(std::ostream &rout,const complex &ref);
};
