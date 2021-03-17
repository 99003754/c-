#include "stack1.h"
#include <gtest/gtest.h>

TEST(full, mystack)
{
    mystack<int> a(2);
    /*a.push(1);
    EXPECT_EQ(1, a.peek());
    a.push(2);

    EXPECT_EQ(1, a.isFull());
    */

   // Add a push function with return values
   //test for push operation is successful or not until the size
   //   EXPECT_EQ(SUCCESS, a.push());  // already stack is full
   //   EXPECT_EQ(STACK_FULL, a.push());
}
TEST(pop, mystack)
{
    mystack<int> a(2);
    EXPECT_EQ(STACK_EMPTY, a.pop());
}
/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
