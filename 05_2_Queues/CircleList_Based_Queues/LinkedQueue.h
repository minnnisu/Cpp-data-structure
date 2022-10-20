#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H
#include "CircleList.h"
#include <iostream>

typedef string Elem;
using namespace std;

class LinkedQueue{
private:
    CircleList q;
    int n;
public:
    LinkedQueue();
    int size();
    bool empty();
    const Elem& front();
    void enqueue(const Elem& e);
    void dequeue();
};


#endif