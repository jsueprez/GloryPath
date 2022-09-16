#include "chapterone.h"
#include "hashtable.h"

#include <unordered_map>
#include <bitset>

using std::unordered_map;
using std::bitset;

#define ASCII_CHARACTER_MAX 128

ChapterOne::ChapterOne()
{

}


bool ChapterOne::isUnique_BruteForce(const string &str1)
{
    string temp = str1;
    bool result = true;
    for(auto i = 0; i < str1.length(); i++)
    {
        for(auto j = 0; j < str1.length(); j++)
        {
            if(i == j) continue;
            if(str1[i] == str1[j])
            {
                result = false;
                break;
            }
        }

        if(!result) break;
    }
    return result;
}

bool ChapterOne::isUnique_StdUnorderepMap(const string &str1)
{
    unordered_map<char, char> table;

    auto result = true;
    for(auto ch : str1)
    {
        result = table.emplace(ch,ch).second;
        if(!result) break;
    }

    return result;
}

bool ChapterOne::isUnique_StdBitSet(const string &str1)
{
    bitset<ASCII_CHARACTER_MAX> table;

    auto result = true;
    for(auto ch : str1)
    {
        if(!table[ch])
        {
            table.flip(ch);
        }
        else
        {
            result = false;
            break;
        }
    }

    return result;
}

bool ChapterOne::isUnique_OwnHashTable(const string &str1)
{
    HashTable table(str1.length());

    auto result = true;
    for(auto ch : str1)
    {
        result = table.emplace(ch);
        if(!result) break;
    }

    return result;
}

