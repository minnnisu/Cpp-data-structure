#ifndef POISITON_H
#define POISITON_H
#include <iostream>
#include "Node.h"

using namespace std;
typedef int Elem;

class Position
{
private:
    Node* v;
    friend class LinkedBinaryTree;
public:
    Position(Node* _v = NULL):v(_v){}
    ~Position(){}
    Elem& operator*();
    Position left() const;
    Position right() const;
    Position parent() const;
    bool isRoot() const;
    bool isExternal() const;
    void setItem(Elem e);
};

// typedef std:list<Position> PostionList;
#endif