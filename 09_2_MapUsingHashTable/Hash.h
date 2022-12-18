#ifndef HASH_H
#define HASH_H
#include <iostream>

using namespace std;

class Hash
{
public:
    int operator()(const string& key){
        unsigned int h = 0;
        for(int i = 0;  i < key.size(); i++){
            h = (h << 5) | (h >> 27);
            h += (unsigned int) key[i];
        }
        return int(h);
    }
};

#endif