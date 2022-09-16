#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <forward_list>
#include <string>

using std::forward_list;
using std::string;

class HashTable
{

public:
    HashTable(int tSize);

    void insert_element(char key);
    bool emplace(char key);

    void delete_element(char key);

    int count_of(char key);

private:
    forward_list<char> * table;
    int total_element;

    int hash_function(int key);
};

#endif // HASHTABLE_H
