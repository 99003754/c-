#include "complex.h"
#include <gtest/gtest.h>
TEST(ctr,complex) {
complex a(1,2);

    
    EXPECT_EQ(1,a.m_real);
    EXPECT_EQ(2,a.m_imag);
    


}
TEST(add,complex) {
complex b(1,2);
complex c(1,2);

complex d=b+c;

    
    EXPECT_EQ(2,d.m_real);
    EXPECT_EQ(4,d.m_imag);
}
TEST(sub,complex) {
complex e(1,2);
complex f(1,2);

complex g=e-f;

    
    EXPECT_EQ(0,g.m_real);
    EXPECT_EQ(0,g.m_imag);
}
TEST(mul,complex) {
complex h(1,2);
complex i(1,2);

complex j=i*h;

    
    EXPECT_EQ(1,j.m_real);
    EXPECT_EQ(4,j.m_imag);
}
TEST(equaltoequalto,complex) {
complex h1(1,2);
complex i1(1,2);
EXPECT_EQ(1,h1==i1);  
}
TEST(plusplus,complex) {
complex h2(1,2);
complex h3=h2++;
    EXPECT_EQ(2,h2.m_real);
    EXPECT_EQ(3,h2.m_imag);

}
TEST(plusplus1,complex) {
complex h4(1,2);
++h4;
    EXPECT_EQ(2,h4.m_real);
    EXPECT_EQ(3,h4.m_imag);

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
