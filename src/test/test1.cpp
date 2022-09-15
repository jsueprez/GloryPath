#include "gtest/gtest.h"
#include "widget.h"

TEST(testMath, first_test)
{
    Widget x;
    EXPECT_EQ(600000, x.get_value());
}

TEST(testMath2, a_dummy_test)
{
    EXPECT_EQ(2, 2);
}
