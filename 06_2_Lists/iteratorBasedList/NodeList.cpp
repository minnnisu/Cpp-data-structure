#include "NodeList.h"

NodeList::NodeList(){
    n = 0;
    header = new Node;
    tailer = new Node;
    header->next = tailer;
    tailer->prev = header;
}

NodeList::~NodeList(){}

int NodeList::size() const{
    return n;
}

bool NodeList::empty() const{
    return n < 1;
}

Iterator NodeList::begin() const{
    return Iterator(header->next);
}

Iterator NodeList::end() const{
    return Iterator(tailer);
}

void NodeList::insert(const Iterator& p, const Elem& e){
    Node *targetNode = p.v;
    Node *newNode = new Node;
    newNode->elem = e;
    
    newNode->prev = targetNode->prev;
    newNode->next = targetNode;
    targetNode->prev->next = newNode;
    targetNode->prev = newNode;
    n++;
}

void NodeList::insertFront(const Elem& e){
    insert(begin(), e);
}

void NodeList::insertBack(const Elem& e){
    insert(end(), e);
}

void NodeList::erase(const Iterator& p){
    Node *old = p.v;
    old->prev->next = old->next;
    old->next->prev = old->prev;
    delete old;
    n--;
}

void NodeList::eraseFront(){
    erase(begin());
}
void NodeList::eraseBack(){
    erase(--end());
}
