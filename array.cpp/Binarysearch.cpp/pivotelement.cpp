#include<iostream>
using namespace std;
int findpivot(int arr[],int size=6){
    int s=0,e=size-1;
    while(s<e){
    int mid=s+(e-s)/2;
    if(arr[mid]>=arr[0]){
        s=mid+1;
    }
    else{
        e=mid;
    }
}
return s;
}
int main(){
int arr[6]={8,9,10,11,5,6};
findpivot(arr,6);
cout <<"The pivot element is at index = "<<findpivot(arr,6);
return 0;
}