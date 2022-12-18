#include "DLinkedList.h"

DLinkedList::DLinkedList(){
    header = new DNode;
    tailer = new DNode;
    header->next = tailer;
    tailer->prev = header;
}

DLinkedList::~DLinkedList(){
    while (!empty()){
        removeFront();
    }
    delete header;
    delete tailer;
}

bool DLinkedList::empty() const {
    return (header->next == tailer);
}

const Elem& DLinkedList::front() const{
    return (header->next->elem);
}

const Elem& DLinkedList::back() const{
    return (tailer->prev->elem);
}

void DLinkedList::add(DNode *v, const Elem& e){
    DNode *newNode = new DNode; //새로운 노드 생성
    newNode->elem = e; //새로운 노드에 element 값 넣기

    DNode *prevNode = v->prev; //v 이전 노드
    newNode->prev = prevNode;
    newNode->next = v;

    prevNode->next = newNode;
    v->prev = newNode;
}

void DLinkedList::addFront(const Elem& e){
    add(header->next, e);
}

void DLinkedList::addBack(const Elem& e){
    add(tailer, e);
}

void DLinkedList::remove(DNode *v){
    if(!empty()){
        DNode *prevNode = v->prev;
        DNode *nextNode = v->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
        
        delete v;
    }
}

void DLinkedList::removeFront(){
    remove(header->next);
}

void DLinkedList::removeBack(){
    remove(tailer->prev);
}

void DLinkedList::showAll(){
    DNode *targetNode = header->next;
    cout << "header -> ";
    while (targetNode != tailer){
        cout << targetNode->elem + " -> ";
        targetNode = targetNode->next;
    }

    cout << "tailer" <<endl;
}