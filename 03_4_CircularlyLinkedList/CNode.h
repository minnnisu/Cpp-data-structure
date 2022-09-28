#ifndef CNODE_H
#define CNODE_H
#include <iostream>

using namespace std;

typedef string Elem;

class CNode{
private:
    Elem elem;
    CNode *next;

    friend class CircleList;
};

#endif