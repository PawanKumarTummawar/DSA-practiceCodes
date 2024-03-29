#include<iostream>
using namespace std;

bool elementFound(int arr[][4],int target, int n, int m){
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4], int n, int m){
    for(int j=0; j<4; j++){
        int sum = 0;
        for(int i=0; i<3; i++){
            sum += arr[i] [j];//kuch bhi ho jae pahila walla [] -->row ko darshata hai aur dusra[] --> column ko
            }
            cout<<sum<<endl;
        }
    }

int maxSum(int arr[][4], int n, int m){
    int maxi = INT_MIN;
    int rowIndex ;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum += arr[i] [j];
            }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;

        }
        }
        cout<<maxi;
        return rowIndex;
}

int main(){

    int arr [3][4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter the element to search:"<<endl;
    cin>>target;
    if(elementFound(arr, target, 3, 4)){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    
    //printSum(arr, 3,4);

    int n = maxSum(arr, 3, 4);
    cout<<"The max sum and the rowIndex are: "<< n<<endl;
}