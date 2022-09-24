#include <iostream>

using namespace std;

void insertionSort(char A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        char cur = A[i];
        int k = i - 1;
        while ((k >= 0) && (A[k] > cur))
        {
            A[k + 1] = A[k];
            k--;
        }
        A[k + 1] = cur;
    }
}

int main()
{
    char A[] = {'A', 'E', 'C', 'D', 'B'};
    cout << "정렬 전:";
    for (int i = 0; i < 5; i++)
    {
        cout << A[i];
    }
    cout << endl;

    insertionSort(A, 5);

    cout << "정렬 후:";
    for (int i = 0; i < 5; i++)
    {
        cout << A[i];
    }
    cout << endl;
}