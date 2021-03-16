
#include "current.h"
#include <gtest/gtest.h>
TEST(debit,curr) {
curr s("11","rishab",5000);
s.debit(500);
EXPECT_EQ(4500,s.getBalance());
s.credit(600);
EXPECT_EQ(5100,s.getBalance());
}
TEST(ctr,curr)
{
curr s1("11","rishab",5000);
EXPECT_EQ(5000,s1.bal());
EXPECT_EQ("11",s1.number());
EXPECT_EQ("rishab",s1.name());
}







int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
