#include<iostream>
using namespace std;
void printcount( int n){
for(int i=1;i<=n;i++){
cout<<i<<" ";
}
}

int main(){
    int n;
    cin>>n;
    printcount(n);
    return 0;
}