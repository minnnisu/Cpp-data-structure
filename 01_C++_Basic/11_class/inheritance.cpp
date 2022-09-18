#include <iostream>
using namespace std;

class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age);	// 기초 클래스 생성자의 선언 
	void ShowPersonInfo();
};

class Student : public Person
{
private:
	int student_id_;
public:
	Student(int sid, const string& name, int age);	// 파생 클래스 생성자의 선언 
	void ShowPersonInfo();	// 파생 클래스에서 상속받은 멤버 함수의 재정의 
};

int main(void)
{
	Person lee("순신", 35);
	lee.ShowPersonInfo();
	Student hong(123456789, "길동", 29);
	hong.ShowPersonInfo(); //오버라이딩 된 멤버 함수 호출
	hong.Person::ShowPersonInfo(); //파생클래스의 오버라이딩 된 멤버 함수가 아닌 기초 클래스의 멤버 함수 호출

	return 0;
}

Person::Person(const string& name, int age)	//기초 클래스 생성자
{
	name_ = name;
	age_ = age;
}

void Person::ShowPersonInfo()
{
	cout << name_ << "의 나이는 " << age_ << "살입니다." << endl;
}

Student::Student(int sid, const string& name, int age) : Person(name, age) //기초 클래스 생성자
{
	student_id_ = sid;
}

void Student::ShowPersonInfo()
{
	cout << "이 학생의 학번은 " << student_id_ << "입니다." << endl;
}