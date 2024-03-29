#include<iostream>
using namespace std;
void update(int *p){
    p = p +1;
}

int main(){

    int i = 5;
    int*p1 = &i;
    int**p2 = &p1;

    update(p2);
    cout<<

}