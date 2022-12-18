#ifndef LINKED_BINARY_TREE_H
#define LINKED_BINARY_TREE_H
#include <iostream>
#include <list>
#include "Node.h"
#include "Entry.h"

using namespace std;

class BinaryTree
{
private:
    Node* _root;
    int n;
public:
    class Position;
    BinaryTree();
    int size() const;
    bool empty() const;
    Position root() const;
    // void printPreorder();
    // PositionList positions() const;
    void addRoot();
    void expandExternal(const Position& p);
    int height(const Position& p);
    int depth(const Position& p);
    Position removeAboveExternal(const Position& p);
protected:
    // void preorder(Node* v, PositionList& pl) const;
public:
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
        bool isInternal() const;
        bool isExternal() const;
        void setItem(Entry e);
        typedef std::list<Position> PositionList;
    };
};


#endif