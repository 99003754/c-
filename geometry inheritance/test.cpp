#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include <gtest/gtest.h>


TEST(param_const,circle) {
circle r(2);
EXPECT_EQ(2,r.rad());

}

TEST(area_const,circle) {
circle r1(2);
EXPECT_EQ(12,r1.area());

}

TEST(circum_const,circle) {
circle r2(5);
EXPECT_EQ(30,r2.circum());

}

//rectangle

TEST(param1_const,rectangle) {
rectangle rr(2,4);
EXPECT_EQ(2,rr.l1());
EXPECT_EQ(4,rr.l2());

}

TEST(area1_const,rectangle) {
rectangle rr1(4,5);
EXPECT_EQ(20,rr1.area());

}

TEST(circum1_const,rectangle) {
rectangle rr2(4,5);
EXPECT_EQ(18,rr2.circum());

}


//triangle

TEST(param2_const,triangle) {
triangle t(5,6);
EXPECT_EQ(5,t.b1());
EXPECT_EQ(6,t.b2());
}

TEST(area2_const,triangle) {
triangle t1(5,6);
EXPECT_EQ(15,t1.area());

}

TEST(circum2_const,triangle) {
triangle t2(10,12);

EXPECT_EQ(30,t2.circum());

}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}