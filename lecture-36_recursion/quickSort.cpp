#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {

    int pivotElement = arr[s];
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivotElement) count++;
    }

    // here pivot element ko uske sahi walle index pr dal rhe hai
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // ab apan isi me left and right part ko sambhal rhe hai 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivotElement){
            i++;  // matlab elements sare pivotElement se chotte hi hai toh unko swap nahi kr skte 
        }

        while(arr[j] > pivotElement){
            j--;  // same for j mtlb ki elements sare pivotElement se bade hai toh unko bhi swap nahi kr skte 
        }

        if(i < pivotIndex && j > pivotIndex){  // yaha tak agye mtlb apne ko dono i and j mil gye jo upar walle condition ko mach nahi krte toh unko apan swap kr skte
            swap(arr[i], arr[j]);  // lekin usse pahile make sure krna padega ki woh given conditions k limit mai hai
        }
    }

    return pivotIndex;
}

void quickSort(int arr[] ,int s, int e) {


    // base-case yaha pr processes ruk jaegi || return ho jaegi
    if(s >= e) return ;

    // pivot element nikal kr partition krenge yaha pr
    int p = partition(arr, s, e);

    // partition and pivot walla part ho chuka hai ab-->

    // left walle part ko sort krenge ab
    quickSort(arr, s, p-1);

    // right walle part ko sort krenge ab 
    quickSort(arr, p+1, e);

}

int main() {

    int arr[] = {1,5,3,4,2};
    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}