#ifndef STACK_FULL_H
#define STACK_FULL_H
#include <iostream>
#include <exception>

using namespace std;

class StackFull{
private:
    const string errMsg;
public:
    StackFull(const string& msg);
    void getErrMessage();
};

#endif