#include "color.h"
#include <gtest/gtest.h>
TEST(para,colorr) {
colorr c1(10,20,30);

    EXPECT_EQ(1,c1.display());
    EXPECT_EQ(10,c1.m_r);


}
TEST(strings,colorr) {
colorr c2("FF0100");

    EXPECT_EQ(255,c2.m_r);
    EXPECT_EQ(16,c2.m_g);
    EXPECT_EQ(0,c2.m_b);


}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
