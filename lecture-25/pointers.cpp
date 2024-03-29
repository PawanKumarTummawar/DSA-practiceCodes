#include<iostream>
using namespace std;
int main(){
/* pointer declaration and printing
    int num = 5;
    int num1 = 10;
    
    cout<<num<<endl;
    cout<<"Address of num--> "<<&num<<endl;
    cout<<num1<<endl;
    cout<<"Address of num1--> "<<&num1<<endl;

    int *ptr = &num;

    cout<<"Address of *ptr--> "<<&*ptr<<endl;
    */

   /*
    //pointer declaration
    int i = 5;
    int *p = &i;

    cout<<p<<endl;
    cout<<*p<<endl;

    int *q = 0;
    q = &i;

    cout<<q<<endl;
    cout<<*q<<endl;


    // pointer copying is done in this way , be careful with the asterik
    int *s = q;

    cout<<s<<endl;
    cout<<*s<<endl;
    */

    int z = 3;
    int *p = &z;
    cout<<p<<endl;
    cout<<*p<<endl;
    *p = *p + 1;//value increment krta hai iss address ki
    cout<<p<<endl;
    cout<<*p<<endl;

    cout<<p<<endl;
    cout<<*p<<endl;
    p = p+1;//pointer agle memory location pr chala jata hai , int k case mai +4 bytes ho jaega
    cout<<p<<endl;
    cout<<*p<<endl;//undefined memory location pr chala jata hai toh uss address ki location kuch bhi print kr dega

    return 0;
}