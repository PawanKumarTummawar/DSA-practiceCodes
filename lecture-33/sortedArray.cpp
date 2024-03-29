#include<iostream>
using namespace std;


bool isSorted(int arr[], int size){

    if(size == 0 || size == 1){
        return true;
    }

    else if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1, size - 1);
        return remainingPart;
    }
}

int main(){
    
    int arr[5] = {2,4,6,13,10};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout<<endl<<"Sorted Array"<<endl;
    }
    else{
        cout<<endl<<"Unsorted Array"<<endl;
    }

    return 0;
}