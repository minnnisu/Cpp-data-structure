#ifndef STACK_EMPTY_H
#define STACK_EMPTY_H
#include <iostream>
#include <exception>

using namespace std;

class StackEmpty{
private:
    const string errMsg;
public:
    StackEmpty(const string& msg);
    void getErrMessage();
};

#endif