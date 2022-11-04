#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    // vector<string> myV;
    // vector<string>::iterator iter;
    // vector<string>::iterator iter2;

    // myV.push_back("a");
    // myV.push_back("b");
    // myV.push_back("c");
    // myV.push_back("d");

    // iter = myV.begin();
    // cout << *iter << endl;
    // cout << *(++iter) << endl;


    // for(iter = myV.begin(); iter != myV.end(); iter++)
    //     cout << *(iter) << endl;
    
    // for(int k = 0; k < myV.size(); k++){
    //     cout << myV[k] << endl;
    // }

    std::list<int> myList;
    myList.push_front(100);
    myList.push_front(110);
    myList.push_front(120);
    myList.push_front(130);
    myList.push_front(140);

    cout << myList.size() << endl;
    cout << myList.front() << endl;


    return 0;
}
