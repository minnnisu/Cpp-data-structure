#include "IndexOutOfBounds.h"

using namespace std;

IndexOutOfBounds::IndexOutOfBounds(string message){
    errMessage = message;
}

string IndexOutOfBounds::getErrMessage(){
    return errMessage;
}