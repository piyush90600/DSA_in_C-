//sum first n number

#include<iostream>
using namespace std;

//functional recursion
int sumNumberFunctional(int n){
    if(n==0){
        return 0;
    }
    return n + sumNumberFunctional(n-1);
}

//paramerterized recursion
void sumNumber(int sum, int n){
    if (n==0){
        cout<<sum<<endl;
        return;
    }
    sum+=n;
    sumNumber(sum, n-1);
}
int main(){
    int n; cin>>n;
    int sum=0;
    sumNumber(sum, n);
    int res;
    res = sumNumberFunctional(n);
    cout<<res;
    
}