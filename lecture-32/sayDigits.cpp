#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){

    //base case
    if(n==0){
        return;
    }

    //processing
    int digit = n%10;
    n = n/10;

    cout<<"hello"<<endl;
    

    //recursive relation
    sayDigit(n,arr);

    cout<<arr[digit]<<" ";//interesting revise again IMP
   
}

int main(){

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;

    sayDigit(n,arr);


    return 0;
}