#include<iostream>
using namespace std;

void swapalternate(int arr[],int size){
    for(int i=0;i+1<size;i+=2){
    swap(arr[i],arr[i+1]);
    }
}
void printarray(int arr[],int size){
        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
}
}
int main(){
    int odd[5]={2,5,4,8,9};
    int even[6]={1,6,4,5,8,7};
    int size;
    swapalternate(odd,size=5);
    swapalternate(even,size=6);
    printarray(odd,size=5);
    cout<<endl;
    printarray(even,size=6);
}