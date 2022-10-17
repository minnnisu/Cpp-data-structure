#include <queue>
#include <iostream>

using namespace std;

int main(){
    queue<float> myQueue;
    myQueue.push(3.14);
    myQueue.push(4.12);
    cout << "size: " << myQueue.size() << endl;
    cout << myQueue.front() << endl;
    myQueue.pop();
    cout << myQueue.front() << endl;
    myQueue.pop();
    cout << "empty: " << myQueue.empty() << endl;

}