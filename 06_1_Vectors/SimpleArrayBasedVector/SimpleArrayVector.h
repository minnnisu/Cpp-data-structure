#ifndef SIMPLE_ARRAY_VECTOR_H
#define SIMPLE_ARRAY_VECTOR_H
#include <iostream>

using namespace std;
typedef int Elem;

class SimpleArrayVector
{
private:
    int capacity;
    int n;
    Elem* V;
public:
    SimpleArrayVector(int cap);
    ~SimpleArrayVector();
    const Elem& at(int i);
    void set(int i, const Elem& e);
    void insert(int i, const Elem& e);
    void erase(int i);
    int size() const;
    bool empty() const;
};


#endif