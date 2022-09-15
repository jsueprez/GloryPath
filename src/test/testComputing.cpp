#include "gtest/gtest.h"
#include "computing.h"

TEST(Computing, longerWord)
{
    Computing c;
    auto s1 = "I aaaaaaaam the longer string";
    auto s2 = "I am the shorter string";
    EXPECT_EQ(s1, c.get_longer_word(s1,s2));
}

TEST(Computing, shorterWord)
{
    Computing c;
    auto s1 = "I aaaaaaaam the longer string";
    auto s2 = "I am the shorter string";
    EXPECT_EQ(s2, c.get_shorter_word(s1,s2));
}
