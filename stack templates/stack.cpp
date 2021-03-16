#include"stack1.h"
template<typename T>
mystack<T>::mystack(int maxlen):m_maxlen(maxlen)
{}
template<typename T>
void mystack<T>::push(T val)
{
if(m_top>=(m_maxlen-1))
{
cout<<"stack overflow"<<endl;
}
else
{
m_top++;
m_arr[m_top]=val;
}
}
template<typename T>
T mystack<T>::pop()
{
if(m_top<=-1)
{
cout<<"stack underflow"<<endl;
}
else
{
T x=m_arr[m_top];
m_top--;
return x;
}
}
template<typename T>
T mystack<T>::peek()const
{
return m_arr[0];
}
template<typename T>
bool mystack<T>::isEmpty()const
{
if(m_top==-1)
{
return true;
}
else
{
return false;
}
}
template<typename T>
bool mystack<T>::isFull()const
{
if(m_top==m_maxlen-1)
{
return true;
}
else
{
return false;
}
}
int main()
{
mystack<int> a(2);
int x=a.isEmpty();
cout<<"stack is empty- "<<x<<endl;
a.push(1);
a.push(2);
x=a.isFull();
cout<<"stack is full- "<<x<<endl;
x=a.pop();
cout<<"popped element is "<<x<<endl;
}


