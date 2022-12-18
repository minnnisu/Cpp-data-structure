#ifndef NODE_H
#define NODE_H
#include "Entry.h"
#include <iostream>

using namespace std;

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