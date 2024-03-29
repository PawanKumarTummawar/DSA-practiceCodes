#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int i, sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
    }
      cout<<" The sum of n numbers is:";
    cout<<sum;
}