#include <iostream>

using namespace std;

int recursiveFactorial(int n) {
    if(n == 0) return 1;
    else return n * recursiveFactorial(n-1);
}

int main(){
    int n;
    cout << "enter n : ";
    cin >> n;
    cout << recursiveFactorial(n) << endl;
}