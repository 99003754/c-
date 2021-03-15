#include<iostream>
using namespace std;
class mytime{

public:
int m_hours;
int m_mins;
int m_secs;
mytime();
mytime(int x,int y,int z);
mytime(int h,int m);
mytime operator+(const mytime &obj);
mytime operator-(const mytime &obj);
mytime operator++(int);
mytime& operator+=(const mytime &obj);
bool operator==(const mytime &obj);
void display()const;
mytime& operator++();

};
