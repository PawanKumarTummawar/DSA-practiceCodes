#include<iostream>
using namespace std;
int found;
bool linearsearch(int array[],int size, int key){
    for(int i=0;i<size;i++){
        if(array[i]==key){
             found= 1;
        }
    }
    return found;
}
int main(){
    int size;
    cin>>size;

    int array[100];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int key;
    cin>>key;
    linearsearch(array,size,key);
    if (found){
         cout <<"No. is present";
    }
    else{
         cout <<"No. is absent";
    }
    return 0;
}