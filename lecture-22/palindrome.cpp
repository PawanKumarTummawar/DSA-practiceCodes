#include<iostream>
using namespace std;

bool checkPalindrome(char arr[], int n ){
    int s = 0, e = n-1;
    if()
}

int length(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != 0; i++){
        count++;
    }
    return count;
}

int main(){
    char arr[20];
    cin>>arr;

    cout<<"The entered name is "<<arr;
    int n = length(arr);
    checkPalindrome(arr,n);
}
