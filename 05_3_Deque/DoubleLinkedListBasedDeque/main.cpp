#include <iostream>
#include "LinkedDeque.h"

int main(){
    LinkedDeque q;
    q.insertFront("a");
    q.insertFront("b");
    q.insertBack("c");
    q.insertBack("d");
    cout << "front: " << q.front() << endl;
    cout << "back: " << q.back() << endl;
    cout << "size: " << q.size() << endl;

    cout << "-----------------------------------------" << endl;

    q.removeBack();
    q.removeFront();
    cout << "front: " << q.front() << endl;
    cout << "back: " << q.back() << endl;
    cout << "size: " << q.size() << endl;

    cout << "-----------------------------------------" << endl;

    q.removeBack();
    q.removeFront();
    cout << "size: " << q.size() << endl;
    cout << "empty: " << q.empty() << endl;

}