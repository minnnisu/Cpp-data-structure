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

void DLinkedList::addByIndex(const Elem& e, int i){
    int idx = 0;
    if (i == 0){
        addFront(e);
        cout << "Node 추가 성공!" << endl;
        return;
    }

    DNode *targetNode = header->next;
    while (targetNode != tailer){
        if (idx == i){
            add(targetNode, e);
            cout << "Node 추가 성공!" << endl;
            return;
        }
        targetNode = targetNode->next;
        idx++;
    }

    cout << "접근 가능한 인덱스가 아닙니다." << endl;
}

void DLinkedList::removeByIndex(int i){
    int idx = 0;
    if (i == 0){
        removeFront();
        return;
    }

    DNode *targetNode = header->next;
    while (targetNode != tailer){
        if (idx == i){
            remove(targetNode);
            return;
        }
        targetNode = targetNode->next;
        idx++;
    }
    cout << "접근 가능한 인덱스가 아닙니다." << endl;
}


void DLinkedList::remove(DNode *v){
    if(empty()){
        cout << "노드가 비어있습니다." << endl;
    }else{
        DNode *prevNode = v->prev;
        DNode *nextNode = v->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
        
        delete v;
        cout << "Node 삭제 성공!" << endl;
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