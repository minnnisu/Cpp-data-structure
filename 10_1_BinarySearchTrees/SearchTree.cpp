#include "SearchTree.h"

typedef SearchTree::Iterator Iterator;
typedef BinaryTree::Position TPos;

Iterator& Iterator::operator++() {
    TPos w = v.right();
    if(w.isInternal()){
        do{ v = w; w.left();}
        while(w.isInternal());
    }else{
        w = v.parent();
        while(v == w.right()){
            v = w; w = w.parent();
        }
        v = w;
    }
    return *this;
}

SearchTree::SearchTree(): T(), n(0){
    T.addRoot(); T.expandExternal(T.root());
}

TPos SearchTree::root() const{
    return T.root().left();
}

Iterator SearchTree::begin(){
    TPos v = root();
    while (v.isInternal()) v = v.left();
    return Iterator(v.parent());
}

Iterator SearchTree::end(){
    return Iterator(T.root());
}

Iterator SearchTree::find(const int k){
    TPos v = finder(k, root());
    if(v.isInternal()) return Iterator(v); // 원하는 key를 찾음
    else return end(); // 원하는 key가 없음
}

TPos SearchTree::finder(const int k, const TPos& v) {
    if(v.isExternal()) return v;
    if(k < (*v).getKey()) return finder(k, v.left());
    else if((*v).getKey() < k) return finder(k, v.right());
    else return v;
}

Iterator SearchTree::insert(const int k, const string& x){
    TPos v = inserter(k, x); 
    return Iterator(v);
}

TPos SearchTree::inserter(const int k, const string& x){
    TPos v = finder(k, root()); //key를 찾는다
    while(v. isInternal()) v = finder(k, v.right()); //키가 존재할 경우 같은 키가 더 있는지 찾는다
    T.expandExternal(v);
    (*v).setKey(k);
    (*v).setValue(x);
    n++;
    return v;
}

void SearchTree::erase(const int k){
    TPos v = finder(k, root());
    if(v.isExternal()) return;
    eraser(v);
}
void SearchTree::erase(const Iterator& p){
    erase(p.v);
}

TPos SearchTree::eraser(TPos& v){
    TPos w;
    if(v.left().isExternal()) w = v.left();
    else if (v.right().isExternal()) w = v.right();
    else{ // 자식이 둘 다 있는 경우
        //오른쪽 서브트리 중 가장 작은 값을 찾음
        w = v.right(); 
        do{ 
            w = w.left();
        } while (w.isInternal());
        TPos u = w.parent();
        // 가장 작은 값 복사
        (*v).setKey((*u).getKey());
        (*v).setValue((*u).getValue());
    }
    n--;
    return T.removeAboveExternal(w);
}

int SearchTree::size() const{
    return n;
}
bool SearchTree::empty() const{
    return n == 0;
}