#include "box.h"

#include <gtest/gtest.h>


GTEST_TEST(Empty_const,Box)
{
Box c1;
EXPECT_EQ(0,c1.m_length);
EXPECT_EQ(0,c1.m_breadth);
EXPECT_EQ(0,c1.m_height);
}

GTEST_TEST(Param_const,Box)
{
Box c2(4,5,6);
EXPECT_EQ(4,c2.m_length);
EXPECT_EQ(5,c2.m_breadth);
EXPECT_EQ(6,c2.m_height);
}

GTEST_TEST(Copy_const,Box)
{
Box c3(1,2,3);
Box c4(c3);
EXPECT_EQ(1,c4.m_length);
EXPECT_EQ(2,c4.m_breadth);
EXPECT_EQ(3,c4.m_height);
}

GTEST_TEST(length_const,Box)
{
Box c5(10);
EXPECT_EQ(10,c5.length());
}
/*
GTEST_TEST(breadth_const,Box)
{
Box c6(11);
EXPECT_EQ(11,c6.breadth());
}

GTEST_TEST(height_const,Box)
{
Box c7(12);
EXPECT_EQ(12,c7.height());
}
*/
GTEST_TEST(volume_const,Box)
{
Box c5(4,5,6);
EXPECT_EQ(120,c5.volume());

}
int main(int argc,char **argv)
{
  ::testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();

}
