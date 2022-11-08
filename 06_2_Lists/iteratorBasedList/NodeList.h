#ifndef NODELIST_H
#define NODELIST_H
#include <iostream>
#include "Node.h"
#include "Iterator.h"

typedef string Elem;

class NodeList
{
private:
    int n;
    Node* header;
    Node* tailer;
public:
    NodeList();
    ~NodeList();
    int size() const;
    bool empty() const;
    Iterator begin() const;
    Iterator end() const;
    void insert(const Iterator& p, const Elem& e);
    void erase(const Iterator& p);
    void insertFront(const Elem& e);
    void insertBack(const Elem& e);
    void eraseFront();
    void eraseBack();
};

#endif