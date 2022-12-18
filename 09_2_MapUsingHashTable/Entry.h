#ifndef ENTRY_H
#define ENTRY_H
#include <iostream>

using namespace std;

class Entry
{
private:
    string key;
    string value;
public:
    Entry(string _key, string _value):key(_key), value(_value){};
    string getKey() {return key;}
    string getValue() {return value;}
    void setValue(const string& _value){ value = _value;}
};


#endif
