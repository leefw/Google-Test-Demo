#include "../BaseCode/BaseCode.h"

#include "gtest/gtest.h"

TEST(MyTestCase, MyTest_Success)
{
    EXPECT_EQ(2, MySum(1, 1));
}

TEST(MyTestCase, MyTest_Failure)
{
    EXPECT_EQ(3, MySum(1, 2));
}
