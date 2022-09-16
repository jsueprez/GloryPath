#include "hashtable.h"

HashTable::HashTable (int tSize)
{
    total_element = tSize;
    table = new forward_list<char>[tSize];
}

int HashTable::hash_function(int key)
{
    auto result = key % total_element;
    return result;
}

void HashTable::insert_element(char key)
{
    auto computedHash = hash_function((int)key);
    table[computedHash].push_front(key);
}

bool HashTable::emplace(char key)
{
    auto computedHash = hash_function((int)key);

    if(!table[computedHash].empty())
    {
        forward_list<char>::iterator it;
        for (it = table[computedHash].begin(); it != table[computedHash].end(); it++)
            if (*it == key)
                return false;
    }

    table[computedHash].push_front(key);

    return true;
}

int HashTable::count_of(char key)
{
    auto computedHash = hash_function(key);
    auto result = 0;

    forward_list<char>::iterator it;
    for (it = table[computedHash].begin(); it != table[computedHash].end(); it++)
        if (*it == key)
            result++;

    return result;
}

void HashTable::delete_element(char key)
{
    auto computedHash = hash_function(key);

    forward_list<char>::iterator it;

    for (it = table[computedHash].begin(); it != table[computedHash].end(); it++)
    {
        if (*it == key)
        {
            table[computedHash].remove(*it);
            break;
        }
    }
}

