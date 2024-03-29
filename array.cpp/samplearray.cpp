#include <iostream>
using namespace std;
void printarray(int array[],int size){
    for(int i=0; i<size;i++){
        cout<<array[i];
    }
}
int main() {
    int first[3]={3,1,5} ;
    printarray(first,3);
    int second[5]={0,9,100,2,4} ;
    printarray(second,4);

}