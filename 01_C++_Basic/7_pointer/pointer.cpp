#include <iostream>

using namespace std;

/*
주소 연산자(&)
 - 주소 연산자는 변수의 이름 앞에 사용하여, 해당 변수의 주소값을 반환합니다.

참조 연산자(*)
 - 참조 연산자는 포인터의 이름이나 주소 앞에 사용하여, 포인터에 저장된 주소에 저장되어 있는 값을 참조합니다.
 - '*'기호는 역참조 연산자로 에스크리터(asterisk operator)라고도 불립니다.
*/

int main(){
    int n = 100;
    int *ptr = &n;
    int **pptr = &ptr;

    cout << "변수 n의 주소:" << &n << endl; //변수 n의 주소
    
    cout << "ptr 이용" << endl;
    cout << "변수 n의 주소:" << ptr << endl;
    cout << "변수 n의 값:" << *ptr << endl;

    cout << "pptr 사용" << endl;
    cout << "변수 n의 주소:" << *pptr << endl;
    cout << "변수 n의 값:" << **pptr << endl;

    return 0;
}