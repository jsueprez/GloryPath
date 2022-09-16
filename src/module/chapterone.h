#ifndef CHAPTERONE_H
#define CHAPTERONE_H

#include <string>

using std::string;

class ChapterOne
{
public:
    ChapterOne();

    bool isUnique_BruteForce(const string &str1);
    bool isUnique_StdUnorderepMap(const string &str1);
    bool isUnique_StdBitSet(const string &str1);
    bool isUnique_OwnHashTable(const string &str1);
};

#endif // CHAPTERONE_H
