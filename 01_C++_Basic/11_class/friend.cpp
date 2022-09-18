#include <iostream>

using namespace std;

class PeopleA{
private:
    string name;
    int height;
public:
    PeopleA(string name, int height)
        : name(name), height(height) {};
    //friend 구문의 선언위치(private, public, protected)에 영향을 받지 않음
    friend class PeopleB; //프렌즈 클래스
    friend void sayName(const PeopleA& p); //프렌즈 함수 선언
};

void sayName(const PeopleA& p){ //프렌즈 함수 정의
    cout << p.name << endl;
}

class PeopleB {
public:
    void info_A(const PeopleA& a) { //friend 클래스이므로 PeopleA의 모든 멤버에 접근이 가능
        cout << "이름 : " << a.name << endl;
        cout << "신장 : " << a.height << endl;
    }
};

int main(){
    PeopleA a("홍길동",170);
    sayName(a);
    PeopleB b;
    b.info_A(a);
}