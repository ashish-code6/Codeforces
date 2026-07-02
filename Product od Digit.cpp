// Problem Statement

// Given an integer N, find the product of all its digits.

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    long long prod=1;
    
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    
    while(n!=0){
        
        int digit=n%10;
        prod*=digit;
        n=n/10;
    }
    
    cout<<prod<<endl;
    
    return 0;
}