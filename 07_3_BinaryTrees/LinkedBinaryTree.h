#ifndef LINKED_BINARY_TREE_H
#define LINKED_BINARY_TREE_H
#include <iostream>
#include "Node.h"
#include "Position.h"

using namespace std;

class LinkedBinaryTree
{
private:
    Node* _root;
    int n;
public:
    LinkedBinaryTree();
    int size() const;
    bool empty() const;
    Position root() const;
    void printPreorder();
    PositionList positions() const;
    void addRoot();
    void expandExternal(const Position& p);
    int height(const Position& p);
    int depth(const Position& p);
    Position removeAboveExternal(const Position& p);
protected:
    void preorder(Node* v, PositionList& pl) const;
};


#endif