#include "StackFull.h"

StackFull::StackFull(const string& msg) : errMsg(msg){}

void StackFull::getErrMessage() {
    cout << errMsg << endl;
}