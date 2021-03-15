#include "color.h"
#include <gtest/gtest.h>
TEST(empty_const,color) {
    color c1(10,20,30);
    EXPECT_EQ(1,c1.display());
    //EXPECT_EQ(10,c1.m_r());


}



int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
