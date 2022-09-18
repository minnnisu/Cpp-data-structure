#include <iostream>
using namespace std;

class A
{
public:
	virtual void printV() { cout << "A 클래스의 virtual Print() 함수" << endl; } // 가상함수
    void print() { cout << "A 클래스의 Print() 함수" << endl; } // 일반함수
};

class B : public A
{
	virtual void printV() { cout << "B 클래스의 virtual Print() 함수" << endl; } // 가상함수
    void print() { cout << "B 클래스의 Print() 함수" << endl; } // 일반함수
};

int main(void)
{
	A* ptr;
	A obj_a;
	B obj_b;
	
	ptr = &obj_a;
	ptr->print();
	ptr->printV(); 
	ptr = &obj_b;
	ptr->print();
	ptr->printV();
	return 0;
}