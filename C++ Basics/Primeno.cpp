#include<iostream>
using namespace std;
int main(){
int n,i=2;
cout <<"Enter the value of num:"<<endl;
cin>>n;
while(i<n){
    if(n%i==0){
        cout<<"Number is not Prime no."<<endl;
    }
    else{
        cout<<"Number is Prime no."<<endl;
    }
    cout<<endl;
    i=i+1;
}
}