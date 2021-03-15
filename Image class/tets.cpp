#include "image.h"

#include <gtest/gtest.h>


GTEST_TEST(Empty_const,Image)
{
Image c1;
EXPECT_EQ(0,c1.m_x);
EXPECT_EQ(0,c1.m_y);
EXPECT_EQ(0,c1.m_width);
EXPECT_EQ(0,c1.m_height);
}

GTEST_TEST(Param_const,Image)
{
Image c2(1,2,3,4);
EXPECT_EQ(1,c2.m_x);
EXPECT_EQ(2,c2.m_y);
EXPECT_EQ(3,c2.m_width);
EXPECT_EQ(4,c2.m_height);
}

GTEST_TEST(Copy_const,Image)
{
Image c3(10,11,12,13);
Image c4(c3);
EXPECT_EQ(10,c4.m_x);
EXPECT_EQ(11,c4.m_y);
EXPECT_EQ(12,c4.m_width);
EXPECT_EQ(13,c4.m_height);
}

GTEST_TEST(move_const,Image)
{
Image c8(4,5,6,7);
EXPECT_EQ(1,c8.move(4,5));
}

GTEST_TEST(scale_const,Image)
{
Image c5(4,5,6,7);
EXPECT_EQ(1,c5.scale(5));
}

GTEST_TEST(resize_const,Image)
{
Image c6(4,5,6,7);
EXPECT_EQ(1,c6.resize(2,4));
}
int main(int argc,char **argv)
{
  ::testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();

}