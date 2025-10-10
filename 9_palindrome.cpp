#include<bits/stdc++.h>
using namespace std;

    bool isPalindrome(int x) {
        if (x < 0) return false; // negative numbers can't be palindrome
        string s = to_string(x); // change number to string and copy to string s
        string rev = s;
        reverse(rev.begin(), rev.end());
        return s == rev;
    }
int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    if(isPalindrome(n))cout<<"IS Palindrome"<<endl;
    else cout<<"Not palindrome";
}