
#include "savings.h"
#include "credit.h"
#include "gtest/gtest.h"


GTEST_TEST(Param_const_derived,Savings)
{
Savings c2("234","AAAAAA",50);
EXPECT_EQ("234",c2.number());
EXPECT_EQ("AAAAAA",c2.name());
EXPECT_EQ(50,c2.bal());
}

GTEST_TEST(Param1_const_derived,Savings)
{
Savings c5("12","ABCDEF",25);
EXPECT_EQ("12",c5.number());
EXPECT_EQ("ABCDEF",c5.name());

}

GTEST_TEST(debit_const,Savings)
{
Savings c5c("1234","AAAAAA",50);
c5c.debit(10);
EXPECT_EQ(-10,c5c.getBalance());
}

GTEST_TEST(credit_const,Savings)
{
Savings c8("477","BBBBB",50);
c8.credit(25);
EXPECT_EQ(25,c8.getBalance());
}

//credit class test


GTEST_TEST(Paramp_const_derived,Credit)
{
Credit ca("23","AAAA",500);
EXPECT_EQ("23",ca.number());
EXPECT_EQ("AAAA",ca.name());
EXPECT_EQ(500,ca.bal());
}

GTEST_TEST(Paramp1_const_derived,Credit)
{
Credit cb("1","ABCD",250);
EXPECT_EQ("1",cb.number());
EXPECT_EQ("ABCD",cb.name());

}

GTEST_TEST(debitp_const,Credit)
{
Credit cc("1234","AAAAAA",500);
cc.debit(100);
EXPECT_EQ(400,cc.getBalance());
}

GTEST_TEST(creditp_const,Credit)
{
Credit cd("477","BBBBB",500);
cd.credit(250);
EXPECT_EQ(750,cd.getBalance());
}

int main(int argc,char **argv)
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();

}
