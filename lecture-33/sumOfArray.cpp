#include<iostream>
using namespace std;


int arraySum(int arr[], int size){
 
    // base case
    if(size == 0 ){
        return 0;
    }

    //base case
    if(size == 1){
        return arr[0];
    }

    // size ko kum krk, remaining part ka sum nikalna
    else{
        int remainingPart = arraySum(arr+1, size-1);
        int sum = arr[0] + remainingPart;
        return sum;
    }

    
}

int main(){
    
    int arr[5] = {2,4,6,13,10};
    int size = 5;

    int ans = arraySum(arr, size);

    cout << endl << ans << endl;
    

    return 0;
}