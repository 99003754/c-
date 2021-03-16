#include "distance.h"
#include <gtest/gtest.h>

GTEST_TEST(Empty_const,Distance)
{
Distance c1;
EXPECT_EQ(0,c1.m_feets);
EXPECT_EQ(0,c1.m_inches);
}

GTEST_TEST(Param_const,Distance)
{
Distance c2(1,2);
EXPECT_EQ(1,c2.m_feets);
EXPECT_EQ(2,c2.m_inches);

}

GTEST_TEST(Param1_const,Distance)
{
Distance c3(10,11);
EXPECT_EQ(10,c3.m_feets);

}

TEST(add,Distance) {
Distance b(1,2);
Distance c(1,2);

Distance d=b+c;

    
    EXPECT_EQ(2,d.m_feets);
    EXPECT_EQ(4,d.m_inches);
}

TEST(sub,Distance) {
Distance e(1,2);
Distance f(1,2);

Distance g=e-f;

    
    EXPECT_EQ(0,g.m_feets);
    EXPECT_EQ(0,g.m_inches);
}



TEST(equaltoequalto,Distance) {
Distance h1(1,2);
Distance i1(1,2);
EXPECT_EQ(1,h1==i1);  
}

TEST(plusplus,Distance) {
Distance h2(1,2);
Distance h3=h2++;
    EXPECT_EQ(2,h2.m_feets);
    EXPECT_EQ(3,h2.m_inches);

}

TEST(plusplus1,Distance) {
Distance h4(1,2);
++h4;
    EXPECT_EQ(2,h4.m_feets);
    EXPECT_EQ(3,h4.m_inches);

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
