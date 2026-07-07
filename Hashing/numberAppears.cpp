//count number of times a number appears in an array using array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //brute force
    // int num; 
    // cin>>num;
    // int count=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==num) count++;
    // }
    // cout<<count;


    int ans[13]={0};
    for(int i=0;i<n;i++){
            ans[arr[i]]+=1;
    }
    
    //fetching -- in brute force[O(n)]
    int q; cin>>q;
    while(q--){
        int number; cin>>number;
        cout<<ans[number]<<" ";
    }

}
