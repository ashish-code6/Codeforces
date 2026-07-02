#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int duplicate=n;
    
    int reverse=0;
    
    while(n!=0){
        int digit = n%10;
        reverse = reverse*10+digit;
        n=n/10;
    }
    
    if(reverse==duplicate){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
    
    
    return 0;
}