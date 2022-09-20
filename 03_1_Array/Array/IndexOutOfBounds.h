#ifndef INDEX_OUT_OF_BOUNDS_H
#define INDEX_OUT_OF_BOUNDS_H
#include <iostream>

using namespace std;

class IndexOutOfBounds //접근 불가능한 Array 인덱스에 접근할 경우 예외처리
{
private:
    string errMessage; //오류 메시지
public:
    IndexOutOfBounds(string message = ""); //생성자
    string getErrMessage(); //오류 메시지 반환
};

#endif