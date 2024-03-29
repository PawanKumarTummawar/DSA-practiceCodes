#include<iostream>
using namespace std;
void reversearray(int array[],int size){
    int start=0;
    int end=start+1;
    while(start<=end){
    swap(array[start],array[end]);
    start>>2;
    end<<2;
    }
}
void printarray(int array[],int size){
    for(int i=0; i<size;i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int size;
    int array[6]={0,1,2,3,4,5};
    int brray[7]={11,14,15,1,6,78,69};
    reversearray(array, size=6);
    reversearray(brray, size=7);
    printarray(array,size=6);
    printarray(brray,size=7);
}