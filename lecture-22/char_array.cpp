#include<iostream>
using namespace std;

 void reverse(char name[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }
 }

 int Length( char name[]){
        int count = 0;
        for(int i=0; name[i] !='\0' ; i++){
            count++;
        }

        return count;
    }

int main(){

    char name[20];
    cout<<"Enter the name: "<<endl;
    
    cin>>name;
    //name[2] ='\0';
    cout<<"The entered name is:" << name<<endl;

    cout<<"The length of the string is:"<< Length(name)<<endl;
    int n = Length(name);
    reverse(name,n);
    cout<<"The name after it is reversed is :-"<<endl;
    cout<<name;
}