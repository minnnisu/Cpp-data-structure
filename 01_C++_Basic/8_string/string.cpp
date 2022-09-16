#include <iostream>
#include <string>

using namespace std;

int main(){
    // //C Style 문자열 처리
    // const int SIZE = 20;
    // char address[SIZE]; //문자열 크기가 20을 넘어가면 오류 발생
    // char name[SIZE];
    
    // cout << "자신의 이름을 적어주세요 : ";
    // cin.get(name, SIZE).get(); //공백도 같이 입력받기 위해 get() 메소드 사용
    // cout << "자신이 살고 있는 도시를 적어주세요 : ";
    // cin.get(address, SIZE).get();
    
    // cout << address << "에 살고 있는 " << name << endl;


    //String 클래스
    string name;
    cout << "너의 이름은? ";
    getline(cin, name); 
    // cin 객체를 이용한 문자열의 입력은 한 단어 단위로 수행한다.
    // 문자열을 한 행(line)씩 읽고 싶을 때는 getline() 함수를 사용한다.
    cout << "너는 " << name << "이구나" << endl;
    cout << "너 이름은 " << name.length() << "글자구나" << endl;

    return 0;
}