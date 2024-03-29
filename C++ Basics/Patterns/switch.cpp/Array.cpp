#include<iostream>
using namespace std;
void printArray(int array[],int size ){
    for(int i =0; i<size; i++){
   cout<<array[i]<<endl;
   }
}
int main(){
   // cin>>n;
   int array[10]={1,2,3,4,5,6,7,8,9};
    printArray( array, 10);
}
