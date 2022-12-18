#ifndef POISITON_H
#define POISITON_H
#include <iostream>
#include <list>
#include "Node.h"

using namespace std;
typedef int Elem;

class Position
{
private:
    Node* v;
    friend class BinaryTree;
public:
    Position(Node* _v = NULL):v(_v){}
    ~Position(){}
    Entry& operator*() const;
    bool operator==(const Position& v) const;
    Position left() const;
    Position right() const;
    Position parent() const;
    bool isRoot() const;
    bool isExternal() const;
    bool isInternal() const;
};

typedef std::list<Position> PositionList;
#endif