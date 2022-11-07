#include <iostream>
using namespace std;

#define MAX 5

void sortBouble(int arr[]){
    for(int i = 1; i < MAX; i++){
        for(int j = 0; j <= MAX-i; j++){
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[MAX];
    for(int i = 0; i < MAX; i++){
        cin >> arr[i];
    }

    sortBouble(arr);
    for(int i = 0; i < MAX; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}
