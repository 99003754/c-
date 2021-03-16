#include "stack1.h"
#include <gtest/gtest.h>

TEST(full,mystack) {
mystack<int> a(2);
a.push(1);
a.push(2);
    
    EXPECT_EQ(1,a.isFull());
}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
