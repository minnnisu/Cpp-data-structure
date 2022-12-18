#ifndef ENTRY_H
#define ENTRY_H
#include <iostream>

using namespace std;

class Entry
{
private:
    int key;
    string value;
public:
    Entry(){}
    Entry(int _key, string _value):key(_key), value(_value){};
    int getKey() {return key;}
    string getValue() {return value;}
    void setKey(const int _key) {key = _key;}
    void setValue(const string& _value){ value = _value;}
    void show(){
        cout << key << " " << value << endl;
    }
};


#endif
