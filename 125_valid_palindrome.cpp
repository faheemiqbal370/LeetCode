#include<bits/stdc++.h>
using namespace std;

    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(),s.end(),[](char c){
            return !isalpha(c);    //isalpha(c) keeps only alphabets. isalnum(c) keeps only letters and numbers
             }), s.end());
            
            transform(s.begin(),s.end(),s.begin(), ::tolower);
            
            // cout<<s;
            string n=s;

            reverse(s.begin(),s.end());
            return s==n;

    }

int main(){
    string s;
    cout<<"Enter"<<endl;
    cin>>s;
    if(isPalindrome(s))cout<<"IS Palindrome"<<endl;
    else cout<<"Not palindrome";
}