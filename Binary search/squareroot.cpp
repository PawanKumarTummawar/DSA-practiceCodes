#include<iostream>
using namespace std;
long long int squareroot(long long int x) 
{
   int s = 0, e = x;
   long long int ans = -1;
  while(s <= e){    
    long long int mid = s + (e-s)/2;
    long long int square = mid*mid;
    if( square == x){
        return mid;
    }
    else if(square > x){
        e = mid - 1;
    }
    else{
        ans = mid;
        s= mid+1;
    }
}
return ans;
}

double findprecision( int n , int precision , int tempsol){
    double factor = 1;
    double ans = tempsol;
    for(int i = 0; i < precision; i++){
        factor = 1/10;
        for( int j = 0; j*j < n; j = j + factor){
          ans = j;
        }
    }
    return ans;
}
int main(){
    int n;
     cout << "Enter the no:"<< endl;
     cin >> n;
     int tempsol = squareroot(n);
     cout << "The answer is:" << findprecision(n, 3, tempsol);
     return 0;
}
   
   