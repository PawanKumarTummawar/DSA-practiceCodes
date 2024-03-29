int findpivot(vector<int> &arr, int n){
    int s = 0,e = n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if( arr[mid] >= arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;   
}
int binarySearch(vector<int> &arr, int s, int e, int k){
    int start = s ,end = e;
    while(start<=end){
    int mid= start+(end-start)/2;
    if(k==arr[mid]){
        return mid;
    }
    else if (k > arr[mid]){
        start = mid+1;
    }
    else{
        end=mid - 1; 
    }
    }
    return -1;
}
int search(vector<int> &arr, int n, int k) 
{
    int pivot = findpivot(arr,n);
    if( k >= arr[pivot] && k <= arr[n-1] ){
       return binarySearch(arr, pivot, n-1,  k);
    }
    else{
        return binarySearch(arr, 0 , pivot - 1, k);
    }
    
}
