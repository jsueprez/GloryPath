#include "computing.h"

Computing::Computing()
{

}

string Computing::get_longer_word(const string &str1, const string &str2 )
{
    return str1.length() > str2.length() ? str1 : str2;
}

string Computing::get_shorter_word(const string &str1, const string &str2 )
{
    return str1.length() < str2.length() ? str1 : str2;
}

bool Computing::isUniqueBruteForce(const string &str1)
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

//bool Computing::isUnique(const string &str1)
//{

//}

