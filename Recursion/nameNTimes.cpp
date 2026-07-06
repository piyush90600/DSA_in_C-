// Print name N times 

#include<iostream>
using namespace std;

void printNames(int i, int n){
    if (i>n) return;
    cout<<"Piyush Kumar"<<endl;;
    printNames(i+1, n);
}
int main(){
    int n; cin>>n;
    printNames(1, n);
}