#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "StringLinkedList.h"
#include "StackEmpty.h"

using namespace std;

typedef string Elem;

class LinkedStack
{
private:
    StringLinkedList S;
    int n;
public:
    LinkedStack(/* args */);
    int size() const;
    bool empty() const;
    const Elem top() const;
    void push(const Elem& e);
    void pop();
};

#endif