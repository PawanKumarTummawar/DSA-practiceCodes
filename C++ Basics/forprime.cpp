#include<iostream>
using namespace std;
int main(){
    int i,n;
    bool isprime=1;
    cout<<"Enter the no. n:";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
         //   cout<<" Not PRIME"<<endl;
            isprime=0;
            break;
        }
    }
        if(isprime==0){
        cout<<"Not PRIME";
}
        else{
             cout<< "PRIME";
        }
}