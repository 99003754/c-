#include "strings.h"
#include <gtest/gtest.h>
TEST(ctr1,mystring) {
mystring s1("rishab");
EXPECT_EQ(PASS,s1.stringcheck("rishab"));
}

TEST(add,mystring) {
mystring s4("rishab");

mystring s5="rishab";
mystring s6=s4+s5;

EXPECT_EQ(PASS,s6.stringcheck("rishabrishab"));
s5.update("hi");
EXPECT_EQ(PASS,s5.stringcheck("hi"));
EXPECT_EQ(PASS,s6.stringcheck("rishabrishab"));
}








int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}