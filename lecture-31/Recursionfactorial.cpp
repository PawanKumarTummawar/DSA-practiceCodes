#include<iostream>
using namespace std;

int factorial(int n){

    if(n==0){      //base case
        return 1;
    }
    else{
    int smallerProblem = factorial(n-1); //har ek smaller function k liye memory mai alag jagah bn rhi hai
    int biggerProblem = n * smallerProblem;
    
    return biggerProblem;
}
}

int main(){

    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<ans<<endl;
    return 0;
}