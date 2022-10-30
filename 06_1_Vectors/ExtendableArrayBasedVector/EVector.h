#ifndef EXTENDABLE_ARRAY_VECTOR_H
#define EXTENDABLE_ARRAY_VECTOR_H
#include<iostream>

using namespace std;

typedef int Elem;

class EVector
{
private:
    Elem *A;
    int n;
    int capacity;
public:
    EVector();
    ~EVector();
    int size() const;
    bool empty() const;
    Elem& at(int i);
    Elem& operator[](int i);
    void erase(int i);
    void insert(int i, const Elem& e);
    void reserve(int N);
    void showAll();
};


#endif