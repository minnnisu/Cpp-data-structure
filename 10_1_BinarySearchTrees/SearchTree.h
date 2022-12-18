#ifndef SEARCH_TREE_H
#define SEARCH_TREE_H
#include "BinaryTree.h"
#include "Position.h"
#include "Entry.h"
#include <iostream>

using namespace std;

class SearchTree
{
public:
    typedef Position TPos;
    class Iterator;
    SearchTree();
    int size() const;
    bool empty() const;
    Iterator find(const int k);
    Iterator insert(const int k, const string& x);
    void erase(const int k);
    void erase(const Iterator& p);
    Iterator begin();
    Iterator end();
protected:
    TPos root() const;
    TPos finder(const int k, const TPos& v);
    TPos inserter(const int k, const string& x);
    TPos eraser(TPos& v);
private:
    BinaryTree T;
    int n;
public:
    class Iterator
    {
    private:
        TPos v;
    public:
        Iterator(const TPos& vv): v(vv){};
        const Entry& operator*() const {return *v;} // read only
        Entry& operator*() {return *v;} // read/write
        bool operator==(const Iterator& p) const{
            return v == p.v;
        }
        Iterator& operator++();
        friend class SearchTree;
    };
};


#endif
