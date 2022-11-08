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

    cout << "------------- insert 4 element -------------" << endl;
    cout << "size: " << myList.size() << endl;
    for(Iterator iter = myList.begin(); iter != myList.end(); ++iter){
        cout << *(iter) << endl;
    }

    cout << "------------- erease 4 element -------------" << endl;
    myList.eraseBack();
    myList.eraseFront();
    cout << "size: " << myList.size() << endl;
    for(Iterator iter = myList.begin(); iter != myList.end(); ++iter){
        cout << *(iter) << endl;
    }

    cout << "empty: " << myList.empty() << endl;

}