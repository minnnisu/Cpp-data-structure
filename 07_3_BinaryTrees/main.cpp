#include <iostream>
#include "LinkedBinaryTree.h"
#include "Position.h"

using namespace std;

int main(){
    LinkedBinaryTree T;
    Position p;
    Position p2;
    Position p3;
    Position p_left;
    Position p_right;

    cout << "Tree Size: " << T.size() << endl;

    T.addRoot();
    cout << "Tree Size: " << T.size() << endl;
    
    p = T.root();
    p.setItem(100);

    T.expandExternal(p);
    p_left = p.left();
    p_left.setItem(200);
    p_right = p.right();
    p_right.setItem(300);

    p2 = p.left();
    T.expandExternal(p2);
    p_left = p2.left();
    p_left.setItem(400);
    p_right = p2.right();
    p_right.setItem(500);

    p3 = p.right();
    T.expandExternal(p3);
    p_left = p3.left();
    p_left.setItem(600);
    p_right = p3.right();
    p_right.setItem(700);

    T.printPreorder(p);
    T.printPreorder(p2);
    T.printPreorder(p3);
}