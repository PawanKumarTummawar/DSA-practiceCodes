#include<iostream>
using namespace std;

int power(int a, int b){
    
    cout <<"a and b are -> "<< a <<"  " << b << endl;
    // base case
    if(b == 0) return 1;

    if(b == 1) return a;

    // Recursive call
    int ans = power(a, b/2);

    cout <<"a, b are -> "<< a <<" "<< b << endl;

    // if b is even
    if( b%2 == 0){
        cout << "Evenans " << ans << endl;
        return ans * ans;
    }
    // if b is odd
    else{
        cout << "Oddans " << ans << endl;
        return a * ans * ans;
    }
}


int main(){

    int a,b;
    cin >> a >> b;

    int ans = power(a,b);

    cout << "Ans is --> "<< ans;

    return 0;
}