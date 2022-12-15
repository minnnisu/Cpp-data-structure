#ifndef HEAP_PRIORITY_QUEUE_H
#define HEAP_PRIORITY_QUEUE_H
#include "VectorCompleteTree.h"
#include "Student.h"
#include <iostream>

using namespace std;

class HeapPriorityQueue
{
private:
    VectorCompleteTree T;
    // C isLess;
    typedef VectorCompleteTree::Position Position;
public:
    bool isLess(Student& s1, Student& s2){
        return s1.getId() < s2.getId();
    }
    int size() const;
    bool empty() const;
    void insert(const Student& e);
    const Student& min();
    void removeMin();
};

#endif
