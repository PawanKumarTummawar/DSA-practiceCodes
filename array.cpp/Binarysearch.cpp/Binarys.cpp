#include<iostream>
using namespace std;
int binarysearch(int array[],int size,int key) {
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if( array[mid]==key ){
            return mid;
        }
        if(key>array[mid]){
        start= mid+1;}
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int evenarray[6]={4,6,8,10,12,14};
    int oddarray[5]={1,3,5,7,9};
    int key;
    int size;
    //cout<<"Enter the no. you want to search for:";
    int evenindex= binarysearch(evenarray,size=6,key=99);
    cout<<"The no. is at the index= "<< evenindex<<endl;
    int oddindex= binarysearch(oddarray,size=5,key=1);
    cout<<"The no. is at the index= "<< oddindex<<endl;
}

