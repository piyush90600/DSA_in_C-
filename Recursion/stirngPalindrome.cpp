// check the string is palindrome or not

#include<bits/stdc++.h>
using namespace std;

bool palindrome(int l, int r, string s){
    if(l>=r) return true;
    if(l<r){
        if(s[l]==s[r]){
            palindrome(l+1, r-1, s);
            return true;
        }
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    int n = s.length();
    cout<<palindrome(0, n-1, s);
}