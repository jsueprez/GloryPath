#ifndef COMPUTING_H
#define COMPUTING_H

#include <string>

using std::string;

class Computing
{
public:
    Computing();

    string get_longer_word(const string &str1, const std::string &str2 );
    string get_shorter_word(const string &str1, const std::string &str2 );

    bool isUniqueBruteForce(const string &str1); // Brute force
    bool isUnique(const string &str1);
};

#endif // COMPUTING_H
