#include <iostream>

// n^2 시간복잡도 예제

using namespace std;

void getMaxMin(int arr[], int size){
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }

        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}

int main(){
    int arr[100];
    int size;
    cout << "배열사이즈" << endl;
    cin >> size;
    cout << "배열입력" << endl;

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    getMaxMin(arr, size);

    
}