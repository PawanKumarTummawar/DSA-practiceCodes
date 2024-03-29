#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the value of n:"; 
    cin>>n;
    int i;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for (i=3;i<=n;i++){
        int nextnumber= a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }

}