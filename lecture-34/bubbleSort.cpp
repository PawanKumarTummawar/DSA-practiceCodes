#include<iostream>
using namespace std;

void bubbleSort(int *arr, int size){

    // base case -- size kum hogi toh return hojaega and size zyada hogi toh yaha pr ruk kr return ho jaega
    if(size == 0 || size == 1) return;

    // ek case solve krlo
    for(int i=0; i<size-1; i++){
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
    }
    }

    // baki recursion sambhal lega -- RECURSIVE CALL
    bubbleSort(arr, size-1);
}

int main() {

    int arr[6] = {9,6,7,1,0,5};
    int n = 6;

    bubbleSort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}