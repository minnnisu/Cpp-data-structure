#ifndef CIRCLE_LIST_H
#define CIRCLE_LIST_H

#include "CNode.h"
#include <iostream>

using namespace std;

typedef string Elem;

class CircleList{
private:
    CNode *cursor;
public:
    CircleList();
    ~CircleList();
    bool empty() const;
    const Elem& front() const;
    const Elem& back() const;
    void advance();
    void add(const Elem& e);
    void remove();
    void showAll();
};


#endif