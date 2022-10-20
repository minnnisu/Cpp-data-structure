#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <iostream>

using namespace std;

class Exception
{
private:
    string errMsg;
public:
    Exception(const string& m);
    const string& getErrMessage();
};

#endif