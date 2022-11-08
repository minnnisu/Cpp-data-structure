#include "Iterator.h"

// private:
//     Node *v;
//     Iterator(Node *u);
// public:
//     Iterator();
//     ~Iterator();
//     Elem& operator*();
//     bool operator==(const Iterator& p) const;
//     bool operator!=(const Iterator& p) const;
//     Iterator& operator++();
//     Iterator& operator--();
//     friend class NodeList;

Iterator::Iterator(){};

Iterator::Iterator(Node *u): v(u){};

Iterator::~Iterator(){};

Elem& Iterator::operator*(){
    return v->elem;
}

bool Iterator::operator==(const Iterator& p) const{
    return p.v == v;
}

bool Iterator::operator!=(const Iterator& p) const{
    return p.v != v;
}

Iterator& Iterator::operator++(){
    v = v->next;
    return *this;
}

Iterator& Iterator::operator--(){
    v = v->prev;
    return *this;
}
