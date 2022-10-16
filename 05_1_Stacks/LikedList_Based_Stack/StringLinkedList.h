#ifndef STRING_LINKED_LIST_H
#define STRING_LINKED_LIST_H

#include <iostream>
#include "StringNode.h"

class StringLinkedList
{
private:
    StringNode* head;
public:
    StringLinkedList();
    ~StringLinkedList();
    bool empty() const;
    const string front() const;
    void addFront(const string& e);
    void removeFront();
};

#endif


