#include "SearchTree.h"
#include <iostream>

using namespace std;

int main(){
    SearchTree T;
    T.insert(10, "Kim");
    T.insert(12, "Choi");
    T.insert(8, "Ahn");
    T.insert(15, "Park");
    T.insert(10, "Lee");

    (*T.find(10)).show();
    (*T.find(12)).show();
    T.erase(10);
    T.erase(10);
    if(T.find(10) == T.end()){
        cout << "Not Found" << endl;
    }
}