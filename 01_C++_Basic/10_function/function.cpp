#include <iostream>

using namespace std;

typedef double (*Arith) (double, double);

double Calculator(double, double, Arith);

double Add(double num1, double num2) { return num1 + num2; }
double Sub(double num1, double num2) { return num1 - num2; }
double Mul(double num1, double num2) { return num1 * num2; }
double Div(double num1, double num2) { return num1 / num2; }

int main(){
    Arith calc = NULL;
    double num1, num2;
    cout << "첫번째 숫자: ";
    cin >> num1;
    cout << "두번째 숫자: ";
    cin >> num2;

    calc = Add;
    cout << Calculator(num1, num2, calc) << endl;

    calc = Sub;
    cout << Calculator(num1, num2, calc) << endl;

    calc = Mul;
    cout << Calculator(num1, num2, calc) << endl;

    calc = Div;
    cout << Calculator(num1, num2, calc) << endl;
    
}

double Calculator(double num1, double num2, Arith func) {
    return func(num1, num2);
}