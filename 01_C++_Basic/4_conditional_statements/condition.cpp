#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "값을 입력하세요:";
    cin >> num;
    if(num > 10){
        cout << "10보다 큽니다.";
    }else if(num > 5){
        cout <<  "5보다 큽니다.";
    }else{
        cout << "5보다 작거나 같습니다";
    }

    return 0;    
}