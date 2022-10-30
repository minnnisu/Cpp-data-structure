#include "EVector.h"
#include "Exception.h"
#include <iostream>

int main(){
    try{
        EVector myVector;
        myVector.insert(0,7);
        myVector.insert(0,4);
        cout << myVector.at(1) << endl;
        myVector.insert(2,2);
        // cout << myVector.at(3) << endl; //error
        myVector.erase(1);
        myVector.insert(1,5);
        myVector.insert(1,3);
        myVector.insert(4,9);
        cout << myVector.at(2) << endl;
        myVector.at(3) = 8;
        myVector.showAll();
    }
    catch(Exception& e)
    {
        cout << e.getErrMessage() << endl;;
    }

}