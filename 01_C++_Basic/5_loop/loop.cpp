#include <iostream>

using namespace std;

int main(){
    // for(int i =0; i<5; i++){
    //     cout << i << endl;
    // }

    int arr[5] = {1,2,3,4,5};

    for(int element : arr){
        cout << element << endl;
    }

    return 0;
}