#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){

    int t;
    cin>>t;
    while(t--){
        ll temp,n,sum=0;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp+a[i];
            }
        }
        // for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<a[n-1]<<"\n";

    }
    return 0;
}