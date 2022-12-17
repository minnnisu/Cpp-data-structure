#include <iostream>
#include "LinkedBinaryTree.h"
#include "Position.h"

using namespace std;

int main(){
    LinkedBinaryTree T;
    Position p;
    Position p2;
    Position p3;
    Position p4;
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

    p4 = p2.right();
    T.expandExternal(p4);
    p_left = p4.left();
    p_left.setItem(800);
    p_right = p4.right();
    p_right.setItem(900);

    T.printPreorder();

    cout << "Height of root: " << T.height(p) << endl;
    cout << "Depth of p4: " << T.depth(p4) << endl;
}