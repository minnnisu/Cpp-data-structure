#include "ArrayStack.h"
#include "StackEmpty.h"
#include "StackFull.h"

ArrayStack::ArrayStack(int cap){
    s = new E[cap];
    t = -1;
    capacity = cap;
}

int ArrayStack::size() const{
    return t+1;
}

bool ArrayStack::empty() const{
    return t < 0;
}

const E& ArrayStack::top() const{
    if(empty()) throw StackEmpty("Top of empty stack");
    return s[t];
}

void ArrayStack::push(const E& e){
    if(size() == capacity) throw StackFull("Push to full stack");
    s[++t] = e;
}

void ArrayStack::pop(){
    if(empty()) throw StackEmpty("Pop from empty stack");
    --t;
}