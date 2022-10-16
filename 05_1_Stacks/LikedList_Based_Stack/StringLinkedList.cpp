#include "StringLinkedList.h"

StringLinkedList::StringLinkedList() // 생성자
    :head(NULL){}

StringLinkedList::~StringLinkedList(){
    while(!empty()){
        removeFront();
    }
}

bool StringLinkedList::empty() const{
    return head == NULL;
}

const string StringLinkedList::front() const{
    if (head != NULL){
        return head->elem;
    }
    return "값이 없습니다";
    
}


void StringLinkedList::addFront(const string& e){
    StringNode* v = new StringNode;
    v->elem = e;
    v->next = head;
    head = v;
}

void StringLinkedList::removeFront(){
    StringNode* old = head;
    head = old->next;
    delete old;
}
