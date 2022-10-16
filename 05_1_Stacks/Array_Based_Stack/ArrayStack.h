#ifndef STACK_H
#define STACK_H
#include <iostream>

using namespace std;
typedef string E;

class ArrayStack
{
    enum {DEF_CAPACITY = 100};
public:
    ArrayStack(int cap = DEF_CAPACITY);
    int size() const;
    bool empty() const;
    const E& top() const;
    void push(const E& e);
    void pop();
private:
    E* s; //배열을 기반으로한 스택 공간
    int capacity; //최대용량
    int t; //top의 위치
};

#endif