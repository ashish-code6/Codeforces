// Input:
// An integer N.

// Output:
// Print the number of digits in N

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    
    int cnt=0;
    
    while(n!=0){
        int divi=n/10;
        cnt++;
        n=divi;
    }
    cout<<cnt;
    
    
    
    return 0;
}