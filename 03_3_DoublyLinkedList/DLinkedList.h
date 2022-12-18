#ifndef D_LINKED_LIST_H
#define D_LINKED_LIST_H
#include "DNode.h"
#include<iostream>

using namespace std;

typedef string Elem;

class DLinkedList
{
private:
    DNode *header;
    DNode *tailer;
public:
    DLinkedList();
    ~DLinkedList();
    bool empty() const;
    const Elem& front() const;
    const Elem& back() const;
    void addFront(const Elem& e);
    void addBack(const Elem& e);
    void removeFront();
    void removeBack();
    void showAll();
protected:
    void add(DNode *v, const Elem& e);
    void remove(DNode *v);
};

#endif