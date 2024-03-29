#include<iostream>
using namespace std;

char toLowercase(char ch){
    if(ch >= 'a' && ch<='z'){
        return ch;
    }
    else{
        ch = ch -'A' + 'a';
    }
    return ch;
}

bool checkpalindrome(char name[], int n){
int s = 0, e = n-1;
while(s<=e){
    if(toLowercase(name[s]) != toLowercase(name[e])){
        return 0;
    }
    s++;
    e--;
}
 return 1;
}


int getlength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];
    cout<<"Enter the name"<<endl;
    cin>>name;
    int n = getlength(name);
    cout<<"Length of string is-> "<<n<<endl;

    cout<<"Name is--> "<<checkpalindrome(name,n)<<endl;

}