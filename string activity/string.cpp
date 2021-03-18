#include "string.h"
/**
 * @brief Construct a new mystring::mystring default object
 * 
 */
mystring::mystring():m_s(NULL),length(0)
{
    m_s = new char[1];
    //m_s[0] = '\0'; 
}


/**
 * @brief Construct a new mystring::mystring  parameterized object
 * 
 * @param strin 
 */
mystring::mystring( char* strin)
{
    int len = strlen(strin);
    m_s = new char[len + 1];
    strcpy(m_s,strin);
    getstr();
}


/**
 * @brief Construct a new mystring::mystring copy object
 * 
 * @param copy 
 */

mystring::mystring(const mystring& copy)
{
        int len = strlen(copy.m_s);
    m_s = new char[len + 1];
       strcpy(m_s,copy.m_s);
}

/**
* @brief function that returns the private member of the class
* 
* @return char* 
*/
char* mystring::getstr()  
{
	return m_s;
}
	    
/**
 * @brief function that updates the string of the private member of the class
* 
* @param string 
* @return char* 
*/
char* mystring::update(char* string)  
{
	    strcpy(m_s,string);
	      return m_s;
}
/**
 * @brief function to perform s1 + s2/ overloading + operator
 * 
 * @param str 
 * @return mystring 
 */

mystring mystring:: operator+(char* str)
{    
    mystring result;        
	strcpy(result.m_s,strcpy(m_s,str));  // s1 + "new"
	return result;
}

/**
 * @brief function that assigns the string to the object
 * 
 * @param str 
 * @return mystring 
 */
mystring mystring:: operator=(char* str)
{    
    mystring result;        
	strcpy(result.m_s,strcpy(m_s,str));  // s1 = "new"
	return result;
}


/**
 * @brief function that returns 1 if both strings are equal and 0 if unequal
 * 
 * @param strin 
 * @return int 
 */
int mystring::checkstring(char* strin) const // change name
    {
        if((strcmp(m_s,strin))==0)
            return 1;
        else 
            return 0;
    }

/**
 * @brief function to perform s1 + s2/ overloading + operator
 * 
 * @param obj 
 * @return mystring 
 */
mystring mystring::operator+(const mystring &obj)
{
	mystring result1;        
	strcpy(result1.m_s,strcat(m_s,obj.m_s));  // s1 + s2
	return result1;
}

/**
 * @brief function that assigns the existing object to the new object
 * 
 * @param obj 
 * @return mystring 
 */
mystring mystring::operator=(const mystring &obj)
{
    mystring result;        
	strcpy(result.m_s,strcat(m_s,obj.m_s));  // s1 = s2
	return result;
}


/**
 * @brief function that returns 1 if both strings are equal and 0 if unequal/ == operator overloading
 * 
 * @param obj 
 * @return true  if equal
 * @return false if unequal
 */
bool mystring::operator==(const mystring &obj)
{
    if(m_s==obj.m_s)
        {       
            return true;
        }
    else
        {
            return false;
        }
}

/**
 * @brief function that returns 1 if both string1 is lesser than string2 and 0 if string1 is lesser than string2/ > operator overloading
 * 
 * @param obj 
 * @return true  if string 1
 * @return false 
 */
bool mystring::operator<(const mystring &obj)
{
        if(m_s<obj.m_s)
            {
                return true;
            }
        else
            {
                return false;
            }
}

/**
 * @brief function that returns 1 if both string1 is greater than string2 and 0 if string1 is greater than string2/ < operator overloading
 * 
 * @param obj 
 * @return true  if string 1
 * @return false 
 */
bool mystring::operator>(const mystring &obj)
{
    if(m_s<obj.m_s)
        {
            return true;
        }
    else
        {
            return false;
        }
}

