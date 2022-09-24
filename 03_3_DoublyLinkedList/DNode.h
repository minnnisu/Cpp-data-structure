#ifndef DNODE_H
#define DNODE_H
#include<iostream>

using namespace std;

typedef string Elem;

class DNode
{
private:
    Elem elem;
    DNode *prev;
    DNode *next;
    friend class DLinkedList;
};

#endif