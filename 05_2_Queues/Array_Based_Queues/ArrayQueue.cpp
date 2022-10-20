#include "ArrayQueue.h"
#include "Exception.h"

ArrayQueue::ArrayQueue(int cap)
    :q(new Elem[cap]), f(0), r(0), n(0), capacity(cap) {}; 

int ArrayQueue::size(){
    return n;
}

bool ArrayQueue::empty(){
    return n == 0;
}

const Elem& ArrayQueue::front(){
    if(empty()) throw Exception("Front of empty queue");
    return q[f];
}

void ArrayQueue::enqueue(const Elem& e){
    if(size() == capacity) throw Exception("Enqueue to full stack");
    q[r] = e;
    r = (r + 1) % capacity;
    n++;
}

void ArrayQueue::dequeue(){
    if(empty()) throw Exception("Enqueue from empty stack");
    f = (f + 1) % capacity;
    n--;
}