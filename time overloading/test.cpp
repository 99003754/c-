#include "time.h"
#include <gtest/gtest.h>
TEST(ctr,mytime) {
mytime a(1,2,3);

    
    EXPECT_EQ(1,a.m_hours);
    EXPECT_EQ(2,a.m_mins);
    EXPECT_EQ(3,a.m_secs);
    


}
TEST(add,mytime) {
mytime b(1,60,3);
mytime c(1,60,3);

mytime d=b+c;
    EXPECT_EQ(4,d.m_hours);
    EXPECT_EQ(0,d.m_mins);
    EXPECT_EQ(6,d.m_secs);
    

}


TEST(equaltoequalto,mytime) {
mytime h1(1,2,3);
mytime i1(1,2,3);
EXPECT_EQ(1,h1==i1);  
}
TEST(plusplus,mytime) {
mytime h2(1,2,3);
mytime h3=h2++;
    EXPECT_EQ(2,h2.m_hours);
    EXPECT_EQ(3,h2.m_mins);
    EXPECT_EQ(4,h2.m_secs);

}
TEST(plusplus1,mytime) {
mytime h4(1,2,3);
++h4;
    EXPECT_EQ(2,h4.m_hours);
    EXPECT_EQ(3,h4.m_mins);
    EXPECT_EQ(4,h4.m_secs);

}
TEST(plusequal,mytime) {
mytime h5(1,2,3);
h5+=h5;
    EXPECT_EQ(2,h5.m_hours);
    EXPECT_EQ(4,h5.m_mins);
    EXPECT_EQ(6,h5.m_secs);

}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
