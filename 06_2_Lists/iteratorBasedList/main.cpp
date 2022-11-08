#include "NodeList.h"
#include "Iterator.h"
#include <iostream>

using namespace std;

int main(){
    NodeList myList;
    myList.insertFront("a");
    myList.insertFront("b");
    myList.insertFront("c");
    myList.insertBack("d");
    Iterator iter;
    iter = myList.begin();
    ++iter;
    ++iter;
    myList.insert(iter, "newNode");

    cout << "------------- insert 5 element -------------" << endl;
    cout << "size: " << myList.size() << endl;
    for(iter = myList.begin(); iter != myList.end(); ++iter){ 
        cout << *(iter) << endl;
    }

    myList.eraseBack();
    myList.eraseFront();
    iter = myList.begin();
    ++iter;
    myList.erase(iter);

    cout << "------------- erease 3 element -------------" << endl;
    cout << "size: " << myList.size() << endl;
    for(Iterator iter = myList.begin(); iter != myList.end(); ++iter){
        cout << *(iter) << endl;
    }

    cout << "empty: " << myList.empty() << endl;

}