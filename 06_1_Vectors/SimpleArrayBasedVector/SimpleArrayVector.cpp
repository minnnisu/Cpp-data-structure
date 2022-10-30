#include "SimpleArrayVector.h"
#include "Exception.h"

SimpleArrayVector::SimpleArrayVector(int cap) : V(new Elem[cap]), capacity(cap), n(0){};

SimpleArrayVector::~SimpleArrayVector(){}

int SimpleArrayVector::size() const{
    return n;
}
bool SimpleArrayVector::empty() const{
    return n < 1;
}

const Elem& SimpleArrayVector::at(int i){
    if(i >= n || i < 0) throw Exception("out of range");
    return V[i];
}

void SimpleArrayVector::set(int i, const Elem& e){
    if(i >= n || i < 0) throw Exception("out of range");
    V[i] = e;
}

void SimpleArrayVector::insert(int i, const Elem& e){
    if(n >= capacity) throw Exception("vector is full");
    if(i > n || i < 0) throw Exception("out of range");
    for(int j = n-1; j >= i; j--){
        V[j+1] = V[j];
    }
    V[i] = e;
    n += 1;
}

void SimpleArrayVector::erase(int i){
    if(i >= n || i < 0) throw Exception("out of range");
        for(int j = i+1; j < n; j++){
            V[j-1] = V[j];
        }
        n -= 1;
}
