#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;   
    }
    return fact;
}

int nCr(int a, int b){ 
    int num=factorial(a);
    int den=factorial(b)*factorial(a-b);
    return num/den;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"answer is "<<nCr(n,r);
}