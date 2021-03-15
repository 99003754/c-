#include "CAN.h"
#include <gtest/gtest.h>
TEST(ctr,CAN) {
uint8_t x=0xFF;
uint8_t &y=x;
CAN C(0x10,0x10,&y);

    
    EXPECT_EQ(16,C.id);
    EXPECT_EQ(16,C.dlc);
     EXPECT_EQ(255,C.data);
    


}





int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
