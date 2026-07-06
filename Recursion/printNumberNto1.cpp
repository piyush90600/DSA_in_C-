//print number n to 1

#include<iostream>
using namespace std;

// using backtracking
void printNumberbacktracking(int i, int n){
    if (i>n) return;
    printNumberbacktracking(i+1, n);
    cout<<i<<endl;
}

void printNumber(int n){
    if (n==0) return;
    cout<<n<<endl;;
    printNumber(n-1);
}

int main(){
    int n; cin>>n;
    printNumber(n);
    printNumberbacktracking(1, n);
}