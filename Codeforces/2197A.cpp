#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int d(int y){
    int ans=0;
    while(y){
        ans+=y%10;
        y/=10;
    }
    return ans;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        ll x; cin>>x;
        int cnt=0;
        for(int y=x;y<x+100;y++){
            if(y-d(y)==x) cnt++;
        }
        cout<<cnt<<"\n";
        
    }
    return 0;
}