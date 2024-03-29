#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[], int n){

    for(int i = 0; i<=n; i++){
        cout << arr[i] << " " << endl;
    }
}

void reverse(int arr[], int n){

    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int arr[3] = {1,2,3};

    reverse(arr, 3);

    printArray(arr, 3);
}