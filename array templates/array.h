#include<iostream>
using namespace std;
template<typename T>
class myarray{
T *m_arr;
int m_len;
int s=-1;
public:
myarray();
myarray(int len);
~myarray();
void append(T val);
T at(int index);
bool search(T key)const;
T sum()const;
T min()const;
T max()const;
void reverse();
void sort();
};
