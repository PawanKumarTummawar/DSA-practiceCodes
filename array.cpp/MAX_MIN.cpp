#include<iostream>
using namespace std;
int getmax(int num[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
    maxi=max(maxi,num[i]);
     /*  if(num[i]>max){
            max=num[i];
        }*/
    }
    return maxi;
}
int getmin(int array[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(mini,array[i]);
       /* if(array[i]<min){
            min=array[i];
        }
    }*/
    }
    return mini;
}
int main(){
int size;
cin>>size;
int array[100];
for(int i=0;i<size;i++){
    cin>>array[i];
}
cout<<"The Maximum value is:"<<getmax(array,size)<<endl;
cout<<"The Minimum value is:"<<getmin(array,size)<<endl;

}
