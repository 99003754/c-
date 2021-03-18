#include "strings.h"

mystring::mystring():array(0)
{}
mystring::mystring(const char* string_user)
{
    int len=strlen(string_user);
    length=len;
    array=new char[len+1];
    for(int i=0;i<len+1;i++)
    {
      array[i]=string_user[i];
    }

}
mystring::mystring(const mystring &obj)
{
length=obj.length; 
array=new char[length+1];
strcpy(array,obj.array);
}
mystring::~mystring()
{
    delete[] array;
}
mystring mystring::operator=(const char *new_string)
{
    int len1=strlen(new_string);
    delete[] array;
    length=len1+1;

    array=new char[length];
    strcpy(array,new_string);
    /*for(int i=0;i<len1+1;i++)
    {
      array[i]=new_string[i];
    }
    */
}
mystring mystring::operator=(const mystring &obj)
{
    mystring result;
    result.array=obj.array;
    result.length=obj.length;
}
bool mystring::operator==(const mystring &obj)
{
if(strcmp(array,obj.array)==0)
{
  return true;
}
return false;
}
mystring mystring::operator+(const mystring &obj)
{
    mystring result;
    int len2=length+obj.length;
    result.length=len2-1;
    result.array= new char[len2-1];
    

    for(int i=0;i<len2;i++)
    {
      if(i<length)
      {
        //cout<<array[i];
      result.array[i]=array[i];

      }
      else
      {
        
        result.array[i]=obj.array[i-(obj.length)];

      }
      
    }


    return result;
}

void mystring::display()
{
  for(int i=0;i<=length;i++)
  {
    cout<<array[i];
  }
}
enum_t mystring::stringcheck(const char *check_char)
{
  if(strcmp(array,check_char)!=0)
  {
    return FAIL;
  }
  else
  {
    return PASS;
  }

}
enum_t mystring::update(const char *new_string)
{
int lnt=strlen(new_string);
delete[] array;;
length=lnt+1;
array=new char(lnt+1);
strcpy(array,new_string);


}
/*int main()
{
    mystring s1("rishab");
    mystring s2("hello");
    mystring s3=s1+s2;
    s3.display();
}

*/

