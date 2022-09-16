#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    int scores[3] = {80,60,20};
    
    for (int i = 0; i < 3; i++){
        sum += scores[i];
    }

    cout << sum;

    return 0;
    
}