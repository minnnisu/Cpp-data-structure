#ifndef ITERATOR_H
#define ITERATOR_H
#include "Node.h"
#include <iostream>

using namespace std;
typedef string Elem;

class Iterator
{
private:
    Node *v;
    Iterator(Node *u);
public:
    Iterator();
    ~Iterator();
    Elem& operator*();
    bool operator==(const Iterator& p) const;
    bool operator!=(const Iterator& p) const;
    Iterator& operator++();
    Iterator& operator--();
    friend class NodeList;
};

#endif