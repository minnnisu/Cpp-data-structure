#include <iostream>

using namespace std;

int main(){
    int arr_col_len, arr_row_len;
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    // arr[0]: 한 행의 크기         
    // arr: 배열 전체의 크기
    // arr[0][0]: 인덱스 한 개의 크기
    arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]);     
    arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]);

    for (int i = 0; i < arr_row_len; i++){
        for (int j = 0; j < arr_col_len; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}