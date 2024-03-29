#include<iostream>
using namespace std;

void print(int *p){//declare jab krte hai tab as a pointer hi declare krna pdta hai

        cout<<*p<<endl;
    }

int main(){
/*
    int arr[10]={23, 122, 41, 67};
    
    cout<<"Address of first block--> "<<arr<<endl;//first block ka address
    cout<<"Address of first block--> "<<arr[0]<<endl;
    cout<<"Address of first block--> "<<&arr[0]<<endl;//first block ka address(same)
    */

   /*
    cout<<"1st-->"<< *arr<<endl;//23
    cout<<"2nd-->"<< *arr + 1<<endl;//24
    cout<<"3rd-->"<< *(arr + 1)<<endl;//122
    cout<<"4th-->"<< *(arr) + 1<<endl;//24
    cout<<"5th-->"<< arr[2]<<endl;//41
    cout<<"6th-->"<< *(arr + 2)<<endl;//41

    int i = 3;
    cout<< i[arr] << endl;// very interesting formula check this out
    */
/*
    int arr[10] = {0};
    //size pta krne k 3 tarike , likhne k aur bhi ho skte hai
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;


   // arr = arr + 1;nhi kr skte qki symbol table mai store ho chuka hai aur uski chize change nhi kr skte
    */

   /*int arr[10];

   //arr = arr + 1; not possible to change memory location after ek baar stored in symbol table
    int *p = &arr[0];
    cout<<p<<endl;
    p = p +1;// yaha possible hai array ki location age badha dega
    cout<<p<<endl;
    return 0;*/

    //int arr[5] = {1,2,3,4,5};
  //  char ch[6] = "abcde";//ek zyada size qki last mai null hoga to terminte the string

   // cout<<arr<<endl;//address print krta hai 
    //cout<<ch<<endl;// int array and char array k liye cout differently implemented hai
    
    //char *c = &ch[0];
   // cout<<c<<endl;// address nhi puri string print krta hai

/*
    char snake = 'z';
    char *s = &snake;
    cout<<s<<endl;*/

    

    int value = 5;
    int *p = &value;

    print(p);
// array pass krte hai toh woh as a pointer pass hota hai behind the scene , isiliye uski size woh 8 print krta hai
//and address k case mai pointer koi changes nhi krta but value k case mai krta hai shayad address k case mai copy bnata ho and value k case mai original pr work krta ho
// arr[i] = *(arr+i)   
//benefit of arr ki jagah pointer ka istemal krk *(arr+3) bhejna --->apne ko pura array nhi bhejna padta, jitna zarurat hai utna hi bhejenge
    return 0;
}