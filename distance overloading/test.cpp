#include "distance.h"
#include <gtest/gtest.h>
TEST(ctr,distance1) {
distance1 a(1,2);

    
    EXPECT_EQ(1,a.m_feets);
    EXPECT_EQ(2,a.m_inches);

}
TEST(add,distance1) {
distance1 bb(4,4);
distance1 cc(4,5);

distance1 dd=bb+cc;
    EXPECT_EQ(8,dd.m_feets);
    EXPECT_EQ(9,dd.m_inches);
    
    

}


TEST(equaltoequalto,distance1) {
distance1 h1(1,2);
distance1 i1(1,2);
EXPECT_EQ(1,h1==i1);  
}
TEST(plusplus,distance1) {
distance1 h2(1,2);
distance1 h3=h2++;
    EXPECT_EQ(2,h2.m_feets);
    EXPECT_EQ(3,h2.m_inches);
    

}
TEST(plusplus1,distance1) {
distance1 h4(1,2);
++h4;
    EXPECT_EQ(2,h4.m_feets);
    EXPECT_EQ(3,h4.m_inches);
    
}
TEST(gthanlthan,distance1) {
distance1 p(1,2);
distance1 r(1,3);

    EXPECT_EQ(1,r>p);
    EXPECT_EQ(1,p<r);
 
    
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
