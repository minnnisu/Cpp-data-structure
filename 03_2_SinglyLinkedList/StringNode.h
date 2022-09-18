#ifndef STRING_NODE_H
#define STRING_NODE_H
#include <iostream>

using namespace std;

class StringNode
{
private:
    string elem;
    StringNode* next;

    friend class StringLinkedList;
};

#endif
