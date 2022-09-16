#include <iostream> 
//표준 입출력 클래스
//cout 객체을 통해 출력작업, cin 객체을 통해 입력작업이 가능

using namespace std; // std라는 네임스페이스에 속한 정의들은 네임스페이스 이름을 붙이지 않아도 사용할 수 있음.
//namespace
//C++ 프로그램을 작성할 때 발생하는 이름에 대한 충돌을 방지해 주는 방법을 제공
//C++ 프로그램의 표준 구성 요소인 클래스, 함수, 변수 등은 std라는 이름 공간에 저장되어 있음
//std라는 네임스페이스에 있는 정의를 사용하려면, std:: 접두어를 붙여 해당 정의가 std라는 네임스페이스에 있다는 것을 컴파일러에 알려줘야 한다.

int main(){
    int age;
 
    cout << "여러분의 나이를 입력해 주세요 : ";
    //cout 객체는 다양한 데이터를 출력하는 데 사용되는 C++에서 미리 정의된 출력 스트림을 나타내는 객체입
    cin >> age;
    //cin 객체는 다양한 데이터를 입력받는 데 사용되는 C++에서 미리 정의된 입력 스트림을 나타내는 객체입니다.

    cout << "여러분의 나이는 " << age << "살 입니다." << endl; //endl은 개행
    return 0;
}