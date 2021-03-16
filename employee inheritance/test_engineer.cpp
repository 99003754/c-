#include "engineer.h"
#include <gtest/gtest.h>
TEST(ctr,manager) {
engineer m("1","name",1000,3,2);
EXPECT_EQ(2,m.codde());
EXPECT_EQ("1",m.idd());
EXPECT_EQ("name",m.namee());
EXPECT_EQ(1000,m.salaryy());
EXPECT_EQ(3,m.expp());
}

TEST(appraisal,manager) {
engineer m1("1","name",1000,3,2);
m1.appraisal();
EXPECT_EQ(6000,m1.salaryy());
m1.payroll();
EXPECT_EQ(11000,m1.salaryy());
}





int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
