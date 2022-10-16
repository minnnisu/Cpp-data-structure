#include <iostream>
#include <stack>

// using std::stack;
using namespace std;

stack<int> myStack;

int main(){
    myStack.push(1);
    myStack.push(3);
    myStack.push(5);
    myStack.push(7);
    myStack.push(9);
    cout << "top: " << myStack.top() << endl;
    myStack.pop();
    cout << "top: " << myStack.top() << endl;
    myStack.pop();
    cout << "top: " << myStack.top() << endl;
    myStack.pop();
}