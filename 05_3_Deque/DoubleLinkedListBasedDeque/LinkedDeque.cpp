#include "LinkedDeque.h"

LinkedDeque::LinkedDeque():D(), n(0){};

int LinkedDeque::size() const{
    return n;
}

bool LinkedDeque::empty() const{
    return n == 0;
}

const Elem& LinkedDeque::front() const{
    return D.front();
}

const Elem& LinkedDeque::back() const{
    return D.back();
}

void LinkedDeque::insertFront(const Elem& e){
    D.addFront(e);
    n++;
}

void LinkedDeque::insertBack(const Elem& e){
    D.addBack(e);
    n++;
}

void LinkedDeque::removeFront(){
    D.removeFront();
    n--;
}

void LinkedDeque::removeBack(){
    D.removeBack();
    n--;
}

