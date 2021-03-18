#include "string.h"

#include <gtest/gtest.h>



GTEST_TEST(Param_const,mystring)
{

    char* string1 = "HELLO";
    mystring c2(string1);
    EXPECT_EQ(1,c2.checkstring(string1));


}

GTEST_TEST(Copy_const,mystring)
{
   
    char* string2 = "WELCOME";
    mystring c3(string2);
    mystring c4(c3);
    EXPECT_EQ(1,c4.checkstring(string2));

    c3.update("hi");
    string2 = "hi";// if checked with updated string test case fails 
    EXPECT_EQ(1,c4.checkstring(string2));
}

TEST(add,mystring) 
{
  
  mystring b("HELLO");
  mystring c("WELCOME");
  char* string3 = "HELLOWELCOME";
  mystring d=b+c;

    
  EXPECT_EQ(1,d.checkstring(string3)); //s1+s2 correction
  b.update("hi");
  string3 = "hi"; // if checked with updated string test case fails 
  EXPECT_EQ(1,d.checkstring(string3)); //s1+s2


}



TEST(assignnew,mystring)
{

  mystring b("HELLO");
  char* string3 = "HELLO";
  mystring d=b;
  EXPECT_EQ(1,d.checkstring(string3)); //s1=s2

}


TEST(addstring,mystring) 
{

  char* string3 = "HELLO";
  mystring h("HI");
  mystring j=h + string3;
  EXPECT_EQ(1,j.checkstring(string3));
   
}

TEST(assignstring,mystring) 
{

  char* string3 = "HELLO";
  mystring j=string3;
  EXPECT_EQ(1,j.checkstring(string3));
   
}


TEST(equaltoequalto,mystring) 
{

  mystring h1("HI");
  mystring i1("HI");
  EXPECT_EQ(false,h1==i1);  

}


TEST(lessthan,mystring) 
{

  mystring h1("HELLO");
  mystring i1("WELCOME");
  EXPECT_EQ(true,h1<i1);  

}

TEST(greater,mystring) 
{

  mystring h1("HI");
  mystring i1("HELLO");
  EXPECT_EQ(true,h1>i1);  
  
}

int main(int argc,char **argv)
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();

}
