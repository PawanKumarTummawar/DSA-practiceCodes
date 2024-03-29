#include<iostream>
using namespace std;
bool isODD( int num){
    if (num&1){
      
    return 1;
    }
    return 0;
}

int main(){
int num;
cin>>num;
if(isODD(num)){
    cout<<"ODD";
}
    else{
        cout<<"EVEN";
}
}

