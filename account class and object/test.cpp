#include "account.h"
#include <gtest/gtest.h>
TEST(para,acc) {
acc a("123","rishab",100);

    EXPECT_EQ("123",a.accno);
    EXPECT_EQ("rishab",a.accname);
    EXPECT_EQ(100,a.balance);


}
TEST(debitcredit,acc) {

acc b("123","asf",5000);
b.debit(500);

    EXPECT_EQ(4500,b.getbalance());
    b.credit(600);
    EXPECT_EQ(5100,b.getbalance());



}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
