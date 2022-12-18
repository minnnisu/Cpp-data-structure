#include "BinaryTree.h"

BinaryTree::BinaryTree(): _root(NULL), n(0) {}

int BinaryTree::size() const{
    return n;
}

bool BinaryTree::empty() const{
    return size() == 0;
}

Position BinaryTree::root() const{
    return Position(_root);
}

void BinaryTree::addRoot(){
    _root = new Node;
    n = 1;
}

// void BinaryTree::preorder(Node* v, PositionList& pl) const{ 
//     pl.push_back(Position(v));
//     if(v->left != NULL) preorder(v->left, pl);

//      if(v->right != NULL) preorder(v->right, pl);
// }

// PositionList BinaryTree::positions() const{
//     PositionList pl;
//     preorder(_root, pl); 
//     return PositionList(pl);
// }

// void BinaryTree::printPreorder(){
//     PositionList pl = positions();
//     while (!pl.empty()){
//         Position p = pl.front();
//         pl.pop_front();
//         cout << p.v->elt << " ";
//     }
//     cout << endl;
// }

void BinaryTree::expandExternal(const Position& p){
    Node* v = p.v;
    v->left = new Node;
    v->right = new Node;
    v->left->par = v;
    v->right->par = v;
    n += 2;
}

Position BinaryTree::removeAboveExternal(const Position& p){
    Node* w = p.v; Node* v = w->par;
    Node* sib = (w == v->left ? v->right : v->left);
    if(v == _root){
        _root = sib;
        sib->par = NULL;
    }else{
        Node* gpar = v->par;
        if(v == gpar->left) gpar->left = sib;
        else gpar->right = sib;
        sib->par = gpar;
    }

    delete w; delete v;
    n -= 2;
    return Position(sib);
}

int BinaryTree::height(const Position& p){
    if(p.isExternal()) return 0;
    return max(height(p.left()) , height(p.right())) + 1;
}

int BinaryTree::depth(const Position& p){
    if(p.isRoot()) return 0;
    return 1 + depth(p.parent());
}