#include "manager.h"
#include <gtest/gtest.h>
TEST(ctr,manager) {
manager m("1","name",1000,3,2,1);
EXPECT_EQ(2,m.codee());
EXPECT_EQ(1,m.report());

EXPECT_EQ("1",m.idd());
EXPECT_EQ("name",m.namee());
EXPECT_EQ(1000,m.salaryy());
EXPECT_EQ(3,m.expp());
}

TEST(appraisal,manager) {
manager m1("1","name",1000,3,2,1);
m1.appraisal();
EXPECT_EQ(2000,m1.salaryy());
m1.payroll();
EXPECT_EQ(3000,m1.salaryy());
}





int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
