#ifndef COMPUTING_H
#define COMPUTING_H

#include <string>

using std::string;

class Computing
{
public:
    Computing();
    string get_longer_word(const string s1, const std::string s2 );
    string get_shorter_word(const string s1, const std::string s2 );
};

#endif // COMPUTING_H
