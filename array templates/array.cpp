#include"array.h"
template<typename T>
myarray<T>::myarray():m_len(0)
{}
template<typename T>
myarray<T>::myarray(int len):m_len(len)
{
m_arr=new T[len];
}
template<typename T>
myarray<T>::~myarray()
{
s=-1;
delete[] m_arr;
cout<<"DESTROYED"<<endl;
}
template<typename T>
void myarray<T>::append(T val)
{
s++;
m_arr[s]=val;
}
template<typename T>
T myarray<T>::at(int index)
{
return m_arr[index];
}
template<typename T>
bool myarray<T>::search(T key)const
{
for(int i=0;i<=s;i++)
{
if(m_arr[i]==key)
{
return true;
}
}
return false;
}
template<typename T>
T myarray<T>::sum()const
{
T summ=0;

for(int i=0;i<=s;i++)
{
cout<<"i "<<i<<"  "<<m_arr[i]<<endl;
summ+=m_arr[i];
}
return summ;
}
template<typename T>
T myarray<T>::min()const
{
T temp=10000;
for(int i=0;i<=s;i++)
{
if(m_arr[i]<temp)
{
temp=m_arr[i];

}
}
return temp;
}
template<typename T>
T myarray<T>::max()const
{
T temp=0;
for(int i=0;i<=s;i++)
{
if(m_arr[i]>temp)
{
temp=m_arr[i];
}
}
return temp;
}
template<typename T>
void myarray<T>::reverse()
{
T arr[s];
for(int i=0;i<=s;i++)
{
arr[i]=m_arr[s-i];
}
for(int i=0;i<=s;i++)
{
m_arr[i]=arr[i];
}

}
int main()
{
myarray<int> a(5);
a.append(1);
a.append(2);
a.append(3);
a.append(4);
a.append(5);
int k=a.at(3);
cout<<"at index 3 "<<k<<endl;
a.reverse();
k=a.at(0);
cout<<"at index 0 "<<k<<endl;
k=a.search(10);
cout<<"is 10 present: "<<k<<endl;
k=a.sum();
cout<<"sum is "<<k<<endl;
k=a.min();
cout<<"min is "<<k<<endl;
k=a.max();
cout<<"max is "<<k<<endl;

}

