#include "pointh.h"
#include <gtest/gtest.h>
TEST(dsitance,point) {
point  p1(3,4);

    
    EXPECT_EQ(3,p1.x);
    EXPECT_EQ(4,p1.y);
    


}
TEST(quadr,colorr) {
point p2(3,4);

    EXPECT_EQ(q1,p2.quad());
}
TEST(origin,colorr) {
point p3(0,0);

    EXPECT_EQ(1,p3.isorigin());
}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
