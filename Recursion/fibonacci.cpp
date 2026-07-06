// Fibonacci number find [Time complexity - 2 pow n]

#include<iostream>
using namespace std;

int fibbo(int n){
    if(n<=1) return n;
    return fibbo(n-1)+fibbo(n-2);
}
int main(){
    int n; cin>>n;
    int f = fibbo(n);
    cout<<f<<" ";
}