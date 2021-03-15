#include "fraction.h"
#include <gtest/gtest.h>


GTEST_TEST(Empty_const,Fraction)
{
Fraction c1;
EXPECT_EQ(0,c1.m_num);
EXPECT_EQ(0,c1.m_den);
}

GTEST_TEST(Param_const,Fraction)
{
Fraction c2(1,2);
EXPECT_EQ(1,c2.m_num);
EXPECT_EQ(2,c2.m_den);

}

GTEST_TEST(Param1_const,Fraction)
{
Fraction c3(10,11);
EXPECT_EQ(10,c3.m_num);

}


TEST(add,Fraction) {
Fraction b(1,2);
Fraction c(1,2);

Fraction d=b+c;

    
    EXPECT_EQ(2,d.m_num);
    EXPECT_EQ(4,d.m_den);
}

TEST(sub,Fraction) {
Fraction e(4,3);
Fraction f(1,2);

Fraction g=e-f;

    
    EXPECT_EQ(3,g.m_num);
    EXPECT_EQ(1,g.m_den);
}

TEST(mul,Fraction) {
Fraction h(7,2);
Fraction i(1,2);

Fraction j=i*h;

    
    EXPECT_EQ(7,j.m_num);
    EXPECT_EQ(4,j.m_den);
}

TEST(add1,Fraction) {
Fraction h(7,2);


Fraction j=h + 5;
    EXPECT_EQ(12,j.m_num);
   
}

TEST(sub1,Fraction) {
Fraction h(7,2);


Fraction j=h - 2;
    EXPECT_EQ(5,j.m_num);
   
}

TEST(equaltoequalto,Fraction) {
Fraction h1(1,2);
Fraction i1(1,2);
EXPECT_EQ(1,h1==i1);  
}


TEST(lessthan,Fraction) {
Fraction h1(1,2);
Fraction i1(4,3);
EXPECT_EQ(1,h1<i1);  
}

TEST(greater,Fraction) {
Fraction h1(10,20);
Fraction i1(1,2);
EXPECT_EQ(1,h1>i1);  
}

TEST(simplifyfrac,Fraction) {
Fraction h(7,2);
    EXPECT_EQ(3,h.simplify());
   
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}