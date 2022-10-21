#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<string> myDeque;
    myDeque.push_front("a");
    myDeque.push_front("b");
    myDeque.push_back("c");
    myDeque.push_back("d");
    cout << "front: " << myDeque.front() << endl;
    cout << "back: " << myDeque.back() << endl;
    cout << "size: " << myDeque.size() << endl;

    cout << "-----------------------------------------" << endl;

    myDeque.pop_back();
    myDeque.pop_front();
    cout << "front: " << myDeque.front() << endl;
    cout << "back: " << myDeque.back() << endl;
    cout << "size: " << myDeque.size() << endl;

    cout << "-----------------------------------------" << endl;

    myDeque.pop_back();
    myDeque.pop_front();
    cout << "size: " << myDeque.size() << endl;
    cout << "empty: " << myDeque.empty() << endl;

    return 0;
}