#include<iostream>
using namespace std;
int getsum(int array[],int size){
    int sum=0;
    for(int i=0; i<size;i++){
        sum=sum+array[i];
    }
    return sum;
}
int main(){
    int size;
    cin>>size;
    int array[100];
    for(int i=0; i<size;i++){
        cin>>array[i];
    }
    cout<<"The sum of all the elements of the array are:"<<getsum(array,size)<<endl;
}
   