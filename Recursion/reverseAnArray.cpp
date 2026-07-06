// Reverse an array using recursion

#include<bits/stdc++.h>
using namespace std;

void reverseArrayTwoPointer(int l, int r, vector<int>& arr){
    if(l<r) swap(arr[l], arr[r]);
    if(l>=r) return;
    reverseArrayTwoPointer(l+1, r-1, arr);
    
}

void reverseArrayOnePointer(int i, vector<int>& arr){
    int n= arr.size();
    if (i>=n/2) return;
    if(i<(n-1)) swap(arr[i], arr[n-i-1]);
    reverseArrayOnePointer(i+1, arr);
}
int main(){
    vector<int> arr1= {1, 2, 8 ,0, 5, 6};
    int n= arr1.size();
    reverseArrayTwoPointer(0, n-1, arr1);
    for(auto it:arr1){
        cout<<it<<" ";
    }cout<<endl;
    vector<int> arr2= {1, 9, 8 ,3, 5, 2};
    reverseArrayOnePointer(0, arr2);
    for(auto it:arr2){
        cout<<it<<" ";
    }
}
