#include<iostream>
using namespace std;

void reverse(string &s, int i, int j){  // here make sure to send the address, if not it will create a copy of the string and will not produce the answer

    cout<<"String right now is-->"<<s<<endl;

    //base case
    if(i>=j) return; // yeh bus aise hi return jaega, kuch lekr nahi jaega

    //recursive call
    else{
    swap(s[i], s[j]);
    i++;
    j--;

    reverse(s, i, j);
    }
}

int main(){

    string s = "Pawankumar";

    cout<<endl;
    cout<<s<< endl;

    reverse(s, 0, s.size()-1);

    cout<<s<<endl;
    cout<<endl;

    return 0;
}