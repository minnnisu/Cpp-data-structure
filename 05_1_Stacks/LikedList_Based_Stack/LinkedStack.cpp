#include "LinkedStack.h"

LinkedStack::LinkedStack()
    :S(), n(0) {}

int LinkedStack::size() const{
    return n;
}

bool LinkedStack::empty() const{
    return S.empty();
}

const Elem LinkedStack::top() const{
    if(empty()) throw StackEmpty("Top of empty stack");
    
    return S.front();
}

void LinkedStack::push(const Elem& e){
    n++;
    S.addFront(e);
}

void LinkedStack::pop(){
    if(empty()) throw StackEmpty("Pop from empty stack");

    n--;
    S.removeFront();
}
