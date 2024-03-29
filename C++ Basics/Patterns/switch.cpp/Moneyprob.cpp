#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the amount:"<<endl;
    cin>>num;
    switch (1)
    {
        case 1:cout<<"100$ notes:"<<num/100<<endl;
                num=num%100;
        case 2 :cout<<"50$ notes:"<<num/50<<endl;
                num=num%50;
        case 3 :cout<<"20$ notes:"<<num/20<<endl;
                num=num%20;
        case 4 :cout<<"1$ notes:"<<num/1<<endl;
                num=num%1;
        break;
    }
}