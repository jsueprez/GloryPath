#include "gtest/gtest.h"
#include "chapterone.h"

class TestingChapterOne: public ::testing::Test
{
public:
    void SetUp()
    {

    }

    void TearDown()
    {
    }

    ChapterOne test;

    string s1 = "Unique char"; // U(85) != u(117)
    string s2 = "nnot unique charr";

};

TEST_F(TestingChapterOne, isUnique_BruteForce)
{
    auto resultUnique = test.isUnique_BruteForce(s1);
    auto resultNotUnique = test.isUnique_BruteForce(s2);

    EXPECT_TRUE(resultUnique);
    EXPECT_FALSE(resultNotUnique);
}

TEST_F(TestingChapterOne, isUnique_StdUnorderepMap)
{
    auto resultUnique = test.isUnique_StdUnorderepMap(s1);
    auto resultNotUnique = test.isUnique_StdUnorderepMap(s2);

    EXPECT_TRUE(resultUnique);
    EXPECT_FALSE(resultNotUnique);
}

TEST_F(TestingChapterOne, isUnique_StdBitSet)
{
    auto resultUnique = test.isUnique_StdBitSet(s1);
    auto resultNotUnique = test.isUnique_StdBitSet(s2);

    EXPECT_TRUE(resultUnique);
    EXPECT_FALSE(resultNotUnique);
}

TEST_F(TestingChapterOne, isUnique_OwnHashTable)
{
    auto resultUnique = test.isUnique_OwnHashTable(s1);
    auto resultNotUnique = test.isUnique_OwnHashTable(s2);

    EXPECT_TRUE(resultUnique);
    EXPECT_FALSE(resultNotUnique);
}
