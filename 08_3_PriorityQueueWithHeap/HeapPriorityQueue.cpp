#include "HeapPriorityQueue.h"


int HeapPriorityQueue::size() const{
    return T.size();
}

bool HeapPriorityQueue::empty() const{
    return size() == 0;
}

const Student& HeapPriorityQueue::min() {
    return *(T.root());
}

void HeapPriorityQueue::insert(const Student& e){
    T.addLast(e);
    Position v = T.last();
    while (!T.isRoot(v))
    {
        Position u = T.parent(v);
        if(!isLess(*v, *u)) break;
        T.swap(v, u);
        v = u;        
    }   
}

void HeapPriorityQueue::removeMin(){
    if(size() == 1) T.removeLast();
    else{
        Position u = T.root();
        T.swap(u, T.last());
        T.removeLast();
        while(T.hasLeft(u)){
            Position v = T.left(u);
            if(T.hasRight(u) && isLess(*(T.right(u)), *v)){
                 v = T.right(u);
            }
            if(isLess(*v, *u)){
                T.swap(u, v);
                u = v;
            }else break;
        }
    }
}
