#include "HashMap.h"

typedef HashMap::Iterator Iterator;

Entry& Iterator::operator*() const{
    return *ent;
}

bool Iterator::operator==(const Iterator& p) const{
    if(ba != p.ba || bkt != p.bkt) return false;
    else if(bkt == ba->end()) return true;
    else return ent == p.ent;
}

Iterator& Iterator::operator++(){
    ++ent;
    if(endOfBkt(*this)){ //
        ++bkt;
        while(bkt != ba -> end() && bkt->empty()) ++bkt;
        if(bkt == ba->end()) return *this;
        ent = bkt->begin();
    }
    return *this;
}

HashMap::HashMap(int capacity): n(0), B(capacity){};

int HashMap::size() const{
    return n;
}
bool HashMap::empty() const{
    return n == 0;
}

Iterator HashMap::find(const string& k){
    Iterator p = finder(k);
    if(endOfBkt(p)) return end(); //키를 못 찾은경우
    else return p;
}

Iterator HashMap::finder(const string& k){
    int i = hash(k) % B.size(); //해시함수를 통해 얻은 인덱스
    BItor bkt = B.begin() + i; //bktArray[i]에 접근
    Iterator p(B, bkt, bkt->begin()); 
    while(!endOfBkt(p) && (*p).getKey() != k) nextEntry(p); //List를 순회하면서 키를 탐색
    return p;
}

Iterator HashMap::put(const string& k, const string& v){
    Iterator p = finder(k);
    if(endOfBkt(p)) return inserter(p, Entry(k,v));
    else{
        p.ent->setValue(v);
        return p;
    }
}

Iterator HashMap::inserter(const Iterator& p, const Entry& e){
    EItor ins = p.bkt->insert(p.ent, e);
    n++;
    return Iterator(B, p.bkt, ins);
}


void HashMap::erase(const string& k){
    Iterator p = finder(k);
    if(endOfBkt(p)) return;
    eraser(p);
}

void HashMap::erase(const Iterator& p){
    eraser(p);
}

void HashMap::eraser(const Iterator& p){
    p.bkt->erase(p.ent);
    n--;
}

Iterator HashMap::begin(){
    if(empty()) return end();
    BItor bkt = B.begin();
    while(bkt->empty()) ++bkt;
    return Iterator(B, bkt, bkt->begin());
}

Iterator HashMap::end(){
    return Iterator(B, B.end());
}