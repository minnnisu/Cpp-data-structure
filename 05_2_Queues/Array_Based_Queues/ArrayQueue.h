#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H
#include <iostream>

using namespace std;

typedef string Elem;

class ArrayQueue{
    enum {DEF_CAPACITY = 100};
private:
    Elem *q;
    int f, r, n, capacity;
public:
    ArrayQueue(int cap = DEF_CAPACITY);
    int size();
    bool empty();
    const Elem& front();
    void enqueue(const Elem& e);
    void dequeue();
};

#endif