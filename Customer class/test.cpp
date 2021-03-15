#include "customer.h"
#include <gtest/gtest.h>

/*
TEST(Empty_const,Customer)
{
Customer c1();
EXPECT_EQ(0,c1.m_custID;
EXPECT_EQ(0,c1.m_custName);
EXPECT_EQ(0,c1.m_phone);
EXPECT_EQ(0,c1.m_balance);
}
*/
TEST(Param_const,Customer)
{
Customer c2("A1234","AAAAAA","1234567890",50);
EXPECT_EQ("A1234",c2.m_custId);
EXPECT_EQ("AAAAAA",c2.m_custName);
EXPECT_EQ("1234567890",c2.m_phone);
EXPECT_EQ(50,c2.m_balance);
}

TEST(Param1_const,Customer)
{
Customer c2("ABC12","ABCDEF","123666890");
EXPECT_EQ("ABC12",c2.m_custId);
EXPECT_EQ("ABCDEF",c2.m_custName);
EXPECT_EQ("123666890",c2.m_phone);

}
/*
TEST(Copy_const,Customer)
{
Customer c3("ZC477","BBBBB","0987654321",25.7);
Customer c4(c3);
EXPECT_EQ("ZC477",c4.m_custId);
EXPECT_EQ("BBBBB",c4.m_custName);
EXPECT_EQ("0987654321",c4.m_phone);
EXPECT_EQ("25.7",c4.m_balance);
}
*/
TEST(credit_const,Customer)
{
Customer c8("ZC477","BBBBB","0987654321",25);
EXPECT_EQ(125,c8.credit(100));
}

TEST(makeCall_const,Customer)
{
Customer c5("A1234","AAAAAA","1234567890",50);
EXPECT_EQ(1,c5.makeCall(10));
}

TEST(getbalance_const,Customer)
{
Customer c6("A1234","AAAAAA","1234567890",50);
EXPECT_EQ(50,c6.getBalance());
}

int main(int argc,char **argv)
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();

}