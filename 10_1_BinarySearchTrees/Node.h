#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Entry.h"

using namespace std;
typedef int Elem;

class Node
{
private:
    Entry elt;
    Node *par;
    Node *left;
    Node *right;

    friend class Position;
    friend class BinaryTree;
public:
    Node():elt(), par(NULL), left(NULL), right(NULL){}
};

#endif