#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    
    vector<int>arr;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
        
    }
    
    int sum=0;
    
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    
    if(sum%2!=0){
        cout<<sum/2<<endl;
    }
    else{
       int coin=sum/2;
       if(coin%2==0){
           cout<<coin-2<<endl;
       }
       else{
           cout<<coin-1<<endl;
       }
       
    }
    
   
    
    
    return 0;
}