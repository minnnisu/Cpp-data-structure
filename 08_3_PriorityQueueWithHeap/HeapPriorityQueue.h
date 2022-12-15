#ifndef HEAP_PRIORITY_QUEUE_H
#define HEAP_PRIORITY_QUEUE_H
#include "VectorCompleteTree.h"
#include "Comparator.h"
#include "Student.h"
#include <iostream>

using namespace std;

class HeapPriorityQueue
{
private:
    VectorCompleteTree T;
    Comparator isLess;
    typedef VectorCompleteTree::Position Position;
public:
    int size() const;
    bool empty() const;
    void insert(const Student& e);
    const Student& min();
    void removeMin();
};

#endif
