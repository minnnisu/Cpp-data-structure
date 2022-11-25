#include <iostream>
#include "LinkedBinaryTree.h"
#include "Position.h"

using namespace std;

int main(){
    LinkedBinaryTree T;
    Position p;
    Position p2;
    Position p_left;
    Position p_right;

    cout << "Tree Size: " << T.size() << endl;

    T.addRoot();
    cout << "Tree Size: " << T.size() << endl;
    
    p = T.root();
    p.setItem(100);

    T.expandExternal(p);
    p2 = p.left();
    p2.setItem(200);
    p2 = p.right();
    p2.setItem(300);

    cout << *(p.left()) << endl;
    cout << *(p.right()) << endl;
}