//print number 1 to n


#include<iostream>
using namespace std;

// using backtracking
void printNumberbacktracking(int n){
    if (n==0) return;
    printNumberbacktracking(n-1);
    cout<<n<<endl;
}

void printNumber(int i, int n){
    if (i>n) return;
    cout<<i<<endl;;
    printNumber(i+1, n);
}

int main(){
    int n; cin>>n;
    printNumber(1, n);
    printNumberbacktracking(n);
}