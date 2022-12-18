#ifndef NONEXISTNETELEMENT_H
#define NONEXISTNETELEMENT_H
#include <iostream>

using namespace std;

class NonexistentElement
{
private:
    string errMsg;
public:
    NonexistentElement(const string& m);
    const string& getErrMessage();
};


#endif
