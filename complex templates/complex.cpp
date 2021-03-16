#include"complex.h"
template<typename T>
complex<T>::complex():m_real(0),m_imag(0)
{}
template<typename T>
complex<T>::complex(T x,T y):m_real(x),m_imag(y)
{}
template<typename T>
void complex<T>::display()
{
cout<<"answer is  "<<m_real<<".i"<<m_imag<<endl;
}

std::ostream& operator<<(std::ostream &rout,const complex<int> &ref)
{
	rout<<ref.m_real<<".i"<<ref.m_imag;
	return rout;
}
int main()
{
complex<int> c(1,2);
std::cout<<c;
}
