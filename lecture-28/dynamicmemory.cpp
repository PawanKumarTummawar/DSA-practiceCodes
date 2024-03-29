#include <iostream>
using namespace std;
//<<<<<<<<<<<<<<<<<<<-------------VERY IMPORTANT VERY VERY IMPORTANT---------------->>>>>>>>>>>>>>>>>>>>>>
/*
int getSum(int *arr, int n){//as a pointer hi bhejna padega because isko apn as a pointer hi declare kiye hai n
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

int n;
cin>>n;

int* arr = new int[n];//variable size array

for(int i=0; i<n; i++){//taking input
    cin>>arr[i];
}

int result = getSum(arr,n);//function call 
cout<<"The sum is--->"<<result<<endl;
*/

int main(){

    int row,col;
    cin>>row;
    cin>>col;

    //creating a 2-D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[row]; //har ek array k element row to correspond krega
    }

    //taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>> arr[i][j];
        }
    }

    //printing output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing the array
    for(int i=0; i<row; i++){
        delete []arr[i];
    }

    delete []arr;

return 0;

}