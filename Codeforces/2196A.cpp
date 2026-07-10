#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll p,q;
        cin>>p>>q;
        ll diff=3*p - 2*q;
        if(diff==0) cout<<"Bob\n";
        else if (diff<0) cout<<"Alice\n";
        else{
            ll reduce=min((3*p-0)/3,(2*q -2)/2);
            if(diff>reduce) cout<<"Alice\n";
            else cout<<"Bob\n";
        }
        
    }
    return 0;
}