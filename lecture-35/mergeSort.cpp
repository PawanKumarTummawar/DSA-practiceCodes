#include<iostream>
using namespace std;

void merge (int *arr, int s, int e) {

    int mid = s+(e-s)/2;



}

void print ( int arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
}
int main(){
int arr[] = {1,2,3,4,5};
print(arr, 5);
}



void mergeSort(int arr[], int s, int e){

    // base case
    if(s>=e) return;

    int mid = s+(e-s)/2;
    
    //sort the left part -- > yeh kam RECURSION kr lega 
    mergeSort(arr, s, mid);

    //sorting the right part -- > yeh kam RECURSION kr lega 
    mergeSort(arr, mid+1, e);

    // at the end merging both the parts jo parts alag alag kiye the unko ab merge krna hai
    merge(arr, s, e);
}

int main() {

    int arr[] = {2,1,0,5,4,9,7,5,6,2,33,54};
    int n = 12;

    mergeSort(arr, 0, n-1);

    return 0;
}