#ifndef LINKED_DEQUE_H
#define LINKED_DEQUE_H
#include "DLinkedList.h"
#include <iostream>

typedef string Elem;

class LinkedDeque
{
private:
    DLinkedList D;
    int n;
public:
    LinkedDeque();
    int size() const;
    bool empty() const;
    const Elem& front() const;
    const Elem& back() const;
    void insertFront(const Elem& e);
    void insertBack(const Elem& e);
    void removeFront();
    void removeBack();
}; 

#endif
