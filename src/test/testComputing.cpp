#include "gtest/gtest.h"
#include "computing.h"
#include "hashtable.h"

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

TEST(Computing, countingExistingChar_HashTable)
{
    string s2 = "Eloisa del Valle";

    auto charToCount = 'e';

    HashTable h(s2.length());

    for(auto ch : s2)
        h.insert_element(ch);

    auto nOcurrences = h.count_of(charToCount);

    EXPECT_EQ(nOcurrences , 2);
    EXPECT_EQ(nOcurrences , 2);
}

TEST(Computing, countingNotExistingChar_HashTable)
{
    string s2 = "Eloisa del Valle";

    auto charToCount = 'x';

    HashTable h(s2.length());

    for(auto ch : s2)
        h.insert_element(ch);

    auto nOcurrences = h.count_of(charToCount);

    EXPECT_EQ(nOcurrences , 0);
}

TEST(Computing, deleteElement_HashTable)
{
    string s2 = "Eloisa del Valle";

    auto charToDelete = 'a';

    HashTable h(s2.length());

    for(auto ch : s2)
        h.insert_element(ch);

    h.delete_element(charToDelete);


    EXPECT_EQ(h.count_of(charToDelete), 0);
}
