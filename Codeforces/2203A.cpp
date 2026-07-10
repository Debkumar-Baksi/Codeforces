#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,d;
        cin>>n>>m>>d;
        ll max_height=(d/m)+1;
        ll ans=(n+max_height-1)/max_height;
        cout<<ans<<"\n";
    }
    return 0;
}