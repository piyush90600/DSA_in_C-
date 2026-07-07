//count character of times a character appears in an string using array
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();

    //brute force
    // int count=0;
    // char c; cin>>c;
    // for(int i=0;i<n;i++){
    //     if(s[i]==c) count++;
    // }
    // cout<<count;


    int hash[26] ={0};
    for(int i=0;i<n;i++){
        hash[s[i]-'a'] +=1;
    }
    //fetch
    int q; cin>>q;
    while(q--){
        char ch; cin>>ch;
        cout<<hash[ch-'a']<<" ";
    }

    return 0;

}
