#include "computing.h"

Computing::Computing()
{

}

string Computing::get_longer_word(const string s1, const std::string s2 )
{
    return s1.length() > s2.length() ? s1 : s2;
}

string Computing::get_shorter_word(const string s1, const std::string s2 )
{
    return s1.length() < s2.length() ? s1 : s2;
}

