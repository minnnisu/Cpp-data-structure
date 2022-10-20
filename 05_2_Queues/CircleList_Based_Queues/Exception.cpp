#include "Exception.h"
#include <iostream>

Exception::Exception(const string& m) : errMsg(m){}

const string& Exception::getErrMessage() {
    return errMsg;
}