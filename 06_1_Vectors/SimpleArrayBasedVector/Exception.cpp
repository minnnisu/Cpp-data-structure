#include "Exception.h"

using namespace std;

Exception::Exception(string message){
    errMessage = message;
}

string Exception::getErrMessage(){
    return errMessage;
}