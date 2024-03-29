#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    //base case
    if(size == 0) return false;

    // ek case likhte hai apan
    if(arr[0] == key) return true;

    // recursive function call
    else{
        bool remainingPart = linearSearch(arr+1, size - 1, key);
        return remainingPart;
    }
}

int main (){
    
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key = 1;

    int ans = linearSearch(arr, size, key);

    if(ans){
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }
    return 0;
}