#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key){

    int mid = s+(e-s)/2;

    // base case
    if(arr[mid] == key){
        return true;
    }

    if(s>e) return false;

    if(key < arr[mid]){
        return binarySearch(arr, s, mid-1, key);
    }
    else{
        return binarySearch(arr, mid+1, e, key);
    }
}

int main (){
    
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key = 1;

    bool ans = binarySearch(arr, 0, 4, key);

    if(ans){
        cout<<"found";
    }
    else cout<<"Not found";

    return 0;
}

