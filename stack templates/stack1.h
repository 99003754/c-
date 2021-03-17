/**
 * @file stack1.h
 * @author Bharath.G (bharath.g@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */


// nontype templates
/**
 * template <typename T, size_t size>
 * class mystack
{
    T m_arr[size];
}
    mystack<int, 10> s1;
 *
 */

// Add headerguard
#include<iostream>
using namespace std;
template <typename T>
class mystack
{
    T m_arr[100]; //Dont use magic number
    int m_top = -1;
    int m_maxlen;

public:
    mystack(int maxlen);

    void push(T val);
    T pop();
    T peek() const;
    bool isEmpty() const;
    bool isFull() const;
};

// Code indentation - clangformat -i filename (CTRL + K + F)