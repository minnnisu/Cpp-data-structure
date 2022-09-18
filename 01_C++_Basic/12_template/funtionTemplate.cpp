#include <iostream>
using namespace std;

// 템플릿(template)이란 매개변수의 타입에 따라 함수나 클래스를 생성하는 메커니즘을 의미합니다.
// 템플릿을 사용하면 타입마다 별도의 함수나 클래스를 만들지 않고, 여러 타입에서 동작할 수 있는 단 하나의 함수나 클래스를 작성하는 것이 가능합니다.

template <typename T>
void Swap(T& a, T& b);

template <> 
void Swap<double>(double&, double&);

int main(void)
{
	int c = 2, d = 3;
	cout << "c : " << c << ", d : " << d << endl;
	Swap(c, d);
	cout << "c : " << c << ", d : " << d << endl;
	
	string e = "hong", f = "kim";
	cout << "e : " << e << ", f : " << f << endl;
	Swap(e, f);
	cout << "e : " << e << ", f : " << f << endl;


    double g = 1.234, h = 4.321;
	cout << "g : " << g << ", h : " << h << endl;
	Swap(g, h);
	cout << "g : " << g << ", h : " << h << endl;
	return 0;
}

template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;	
}

template <> void Swap<double>(double&, double&)
{
	// double형은 값을 서로 바꾸지 않음. 
}