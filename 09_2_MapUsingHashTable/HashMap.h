#ifndef HASH_MAP_H
#define HASH_MAP_H
#include "Entry.h"
#include "Hash.h"
#include "NonexistentElement.h"
#include <iostream>
#include <vector>
#include <list>

using namespace std;

class HashMap
{
public:
    class Iterator;
public:
    HashMap(int capacity = 100);
    int size() const;
    bool empty() const;
    Iterator find(const string& k); 
    Iterator put(const string& k, const string& v);
    void erase(const string& k);
    void erase(const Iterator& p);
    Iterator begin(); // vector의 첫번째 요소
    Iterator end(); // vector의 마지막 요소
protected:
    typedef std::list<Entry> Bucket; // a bucket of entries (auxillity data structure)
    typedef std::vector <Bucket> BktArray; // a bucket array
    typedef Bucket::iterator EItor;
    typedef BktArray::iterator BItor;

    Iterator finder(const string& k);
    Iterator inserter(const Iterator& p, const Entry& e);
    void eraser(const Iterator& p);
    static void nextEntry(Iterator& p) {++p.ent;}
    static bool endOfBkt(const Iterator& p) {return p.ent == p.bkt->end();} //*(p.bkt).end() 
private:
    int n;
    Hash hash;
    BktArray B;

public:
    class Iterator
    {
    private:
        EItor ent; // which entry
        BItor bkt; // which bucket
        const BktArray* ba; // witch bucket array
    public:
        Iterator(const BktArray& a, const BItor& b, const EItor& q = EItor()):ent(q), bkt(b), ba(&a){}
        Entry& operator*() const;
        bool operator==(const Iterator& p) const;
        Iterator& operator++(); //advance to next entry
        friend class HashMap;
    };

};

#endif