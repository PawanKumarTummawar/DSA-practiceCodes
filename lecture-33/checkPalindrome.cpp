#include<iostream>
using namespace std;

bool checkPalindrome(string s, int i, int j){

    //base case
    if(i>j) return true;

    //ek case likhdo
    if(s[i] != s[j]) return false;

    //baki recursion sambhal lega
    else{
        return checkPalindrome(s, i+1, j-1);
    }
}

int main(){

    string s = "TeneT";

    cout<<endl;
    cout<<s<< endl;
    
    bool ans = checkPalindrome(s, 0, s.size()-1);

    if(ans){
        cout<<"It is a Palindrome"<<endl;
    }
    else{
        cout<<"It is Not a  Palindrome"<<endl;

    }
    cout<<endl;

    return 0;
}