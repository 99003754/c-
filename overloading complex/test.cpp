#include "complex.h"
#include <gtest/gtest.h>

GTEST_TEST(Empty_const,Complex)
{
Complex c1;
EXPECT_EQ(0,c1.m_real);
EXPECT_EQ(0,c1.m_imag);
}

GTEST_TEST(Param_const,Complex)
{
Complex c2(1,2);
EXPECT_EQ(1,c2.m_real);
EXPECT_EQ(2,c2.m_imag);

}

GTEST_TEST(Param1_const,Complex)
{
Complex c3(10,11);
EXPECT_EQ(10,c3.m_real);

}

TEST(add,Complex) {
Complex b(1,2);
Complex c(1,2);

Complex d=b+c;

    
    EXPECT_EQ(2,d.m_real);
    EXPECT_EQ(4,d.m_imag);
}

TEST(sub,Complex) {
Complex e(10,12);
Complex f(1,2);

Complex g=e-f;

    
    EXPECT_EQ(9,g.m_real);
    EXPECT_EQ(10,g.m_imag);
}

TEST(mul,Complex) {
Complex e(10,12);
Complex f(1,2);

Complex g=e*f;

    
    EXPECT_EQ(10,g.m_real);
    EXPECT_EQ(24,g.m_imag);
}




TEST(equaltoequalto,Complex) {
Complex h1(1,2);
Complex i1(1,2);
EXPECT_EQ(1,h1==i1);  
}

TEST(plusplus,Complex) {
Complex h2(1,2);
Complex h3=h2++;
    EXPECT_EQ(2,h2.m_real);
    EXPECT_EQ(3,h2.m_imag);

}

TEST(plusplus1,Complex) {
Complex h4(1,2);
++h4;
    EXPECT_EQ(2,h4.m_real);
    EXPECT_EQ(3,h4.m_imag);

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
