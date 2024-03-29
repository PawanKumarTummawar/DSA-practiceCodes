#include <iostream>
using namespace std;
int firstocc(int arr[],int n, int key){
    int ans=-1;
    int start=0,end=n-1;
    while(start<=end){
        int mid=start + (end-start)/2;
        if(arr[mid]==key){
            ans= mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;}
        else{
                end=mid-1;
            }
        }
        return ans;
    }
    int lastocc(int arr[],int n, int key){
    int ans=-1;
    int start=0,end=n-1;
    while(start<=end){
        int mid=start + (end-start)/2;
        if(arr[mid]==key){
            ans= mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;}
        else{
                end=mid-1;
            }
        }
        return ans;
    }
int main (){
    int arr[14]={1,2,2,2,4,5,5,5,5,5,6,6,6,6};
    int key;
    
cout<<"The 1st occurence is:= "<<firstocc(arr,14, 6)<<endl;
cout<<"The last occurence is:= "<<lastocc(arr,14,6)<<endl;
return 0;
}