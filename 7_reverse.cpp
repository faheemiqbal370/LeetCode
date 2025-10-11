#include<bits/stdc++.h>
using namespace std;
 
    int reverse(int x) {
        int digit,rev=0;
        while(x!=0){
            digit=x%10;
            x=x/10;
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && digit > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN/10 && digit < -8)) return 0;
            rev=rev*10+digit;
        }  
        return rev;
    }
    
int main(){
    int x;
    cout<<"Enter number"<<endl;
    cin>>x;
   cout<<"Reverse number is "<< reverse(x);

}