#include "CircleList.h"

CircleList::CircleList(){
    cursor = NULL;
}

CircleList::~CircleList(){
    while (!empty()){
        remove();
    }   
}

bool CircleList::empty() const{
    return cursor == NULL;
}

const Elem& CircleList::front() const{
    return cursor->next->elem;
}
const Elem& CircleList::back() const{
    return cursor->elem;
}

void CircleList::advance(){
    if(!empty()) cursor = cursor->next;
}

void CircleList::add(const Elem& e){
    CNode *newNode = new CNode;
    newNode->elem = e;
    if(empty()){ //노드가 비어있을 경우
        cursor = newNode;
        newNode->next = newNode;
    }else{
        newNode->next = cursor->next;
        cursor->next = newNode;
    }
}

void CircleList::remove(){
    if(empty()){ //노드가 비었을 경우
        cout << "노드가 비었습니다" << endl;;
        return;
    }
    
    CNode *old = cursor->next;
    if(old == cursor){ //노드가 1개일 경우
        cursor = NULL;
    }else{
        cursor->next = old->next;
    }
    delete old;

}

void CircleList::showAll(){
    if (empty()){
        cout << "노드가 비었습니다" << endl;
        return;
    }

    CNode *targetNode = cursor->next; //front를 가르킴
    cout << "front -> ";
    
    
    do{
        cout << targetNode->elem;
        targetNode = targetNode->next;

        if(targetNode == cursor->next){ //모든 노드를 다 돌았을 경우
            break;
        }
        cout << " - ";
    }while (true);

    cout << " <- back" <<endl;
}