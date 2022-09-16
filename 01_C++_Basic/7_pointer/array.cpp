#include <iostream>

using namespace std;

int main(){
    // int arr[3] = {10, 20, 30};
    
    // for(int i = 0; i < 3; i++){
    //     cout << *(arr + i) << endl;
    // }

    int *ptr_int = new int;
    *ptr_int = 100;

    cout << *ptr_int << endl;

    delete ptr_int;

    return 0;
}