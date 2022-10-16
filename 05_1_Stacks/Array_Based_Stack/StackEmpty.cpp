#include "StackEmpty.h"

StackEmpty::StackEmpty(const string& msg) : errMsg(msg){}

void StackEmpty::getErrMessage() {
    cout << errMsg << endl;
}