#include "currency.h"
#include <gtest/gtest.h>


GTEST_TEST(Empty_const,Currency)
{
Currency c1;
EXPECT_EQ(0,c1.m_rup);
EXPECT_EQ(0,c1.m_pai);
}

GTEST_TEST(Param_const,Currency)
{
Currency c2(1,2);
EXPECT_EQ(1,c2.m_rup);
EXPECT_EQ(2,c2.m_pai);

}

GTEST_TEST(Param1_const,Currency)
{
Currency c3(10,11);
EXPECT_EQ(10,c3.m_rup);

}

TEST(add,Currency) {
Currency b(1,2);
Currency c(1,2);

Currency d=b+c;

    
    EXPECT_EQ(2,d.m_rup);
    EXPECT_EQ(4,d.m_pai);
}

TEST(sub,Currency) {
Currency e(4,3);
Currency f(1,2);

Currency g=e-f;

    
    EXPECT_EQ(3,g.m_rup);
    EXPECT_EQ(1,g.m_pai);
}


TEST(add1,Currency) {
Currency h(7,2);


Currency j=h + 5;
    EXPECT_EQ(12,j.m_rup);
   
}

TEST(sub1,Currency) {
Currency h(7,2);


Currency j=h - 2;
    EXPECT_EQ(5,j.m_rup);
   
}

TEST(equaltoequalto,Currency) {
Currency h1(1,2);
Currency i1(1,2);
EXPECT_EQ(1,h1==i1);  
}


TEST(lessthan,Currency) {
Currency h1(1,2);
Currency i1(4,3);
EXPECT_EQ(1,h1<i1);  
}

TEST(greater,FCurrency) {
Currency h1(10,20);
Currency i1(1,2);
EXPECT_EQ(1,h1>i1);  
}

TEST(plusplus,Currency) {
Currency h2(1,2);
Currency h3=h2++;
    EXPECT_EQ(2,h2.m_rup);
    EXPECT_EQ(3,h2.m_pai);

}
TEST(plusplus1,Currency) {
Currency h4(1,2);
++h4;
    EXPECT_EQ(2,h4.m_rup);
    EXPECT_EQ(3,h4.m_pai);

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}