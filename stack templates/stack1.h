#include<iostream>
using namespace std;
template<typename T>
class mystack{
T m_arr[100];
int m_top=-1;
int m_maxlen;
public:
mystack(int maxlen);

void push(T val);
T pop();
T peek()const;
bool isEmpty()const;
bool isFull()const;
};
