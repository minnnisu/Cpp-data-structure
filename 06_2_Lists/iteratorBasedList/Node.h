#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;
typedef string Elem;

struct Node
{
    Elem elem;
    Node *prev;
    Node *next;
};

#endif


