#include<iostream>
using namespace std;

void printarray(int ans[], int z ){
    for(int i=0; i<z; i++){
        cout<<ans[i]<<" ";
    }
}

int mergearrays(int arr1[], int m, int arr2[], int n, int arr3[]){
int i=0, j=0, k=0;
while(i<m && j<n){
    if(arr1[i] < arr2[j]){
        arr3[k++] = arr1[i++];
    }
    else{
        arr3[k++] = arr2[j++];
    }
}
while(i<m){
    arr3[k++] = arr1[i++];
}
while(j<n){
    arr3[k++] = arr2[j++];
}
return 0;
}

int main(){

    int arr1[5] = {1,3,5,7,9};
    int arr2[4] = {2,4,6,8};
    int arr3[9] = {0};

    mergearrays(arr1, 5, arr2, 4, arr3);
    printarray(arr3,9);

    return 0;
}