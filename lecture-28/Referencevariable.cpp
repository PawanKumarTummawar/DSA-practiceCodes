#include<iostream>
using namespace std;

int main(){

    int i = 5;
    int &j = i;//ek hi dabbe k do naam

    cout<<i<<endl;//-->5
    i++;
    cout<<i<<endl;//6
    j++;
    cout<<i<<endl;//7
    cout<<j<<endl;//7
    i++;
    cout<<i<<endl;//8



}