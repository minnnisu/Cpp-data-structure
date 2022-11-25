#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;
typedef int Elem;

class Node
{
private:
    Elem elt;
    Node *par;
    Node *left;
    Node *right;

    friend class Position;
    friend class LinkedBinaryTree;
public:
    Node():elt(), par(NULL), left(NULL), right(NULL){}
};

#endif