#include "LinkedQueue.h"
#include "Exception.h"

LinkedQueue::LinkedQueue()
    :q(), n(0) {};

int LinkedQueue::size(){
    return n;
}

bool LinkedQueue::empty(){
    return n == 0;
}

const Elem& LinkedQueue::front(){
    if(empty()) throw Exception("Front of empty queue");
    return q.front();
}

void LinkedQueue::enqueue(const Elem& e){
    q.add(e);
    q.advance();
    n++;
}

void LinkedQueue::dequeue(){
    if(empty()) throw Exception("Dequeue from empty queue");
    q.remove();
    n--;
}