#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){

    int t;
    cin>>t;
    while(t--){
        ll s,k,m;
        cin>>s>>k>>m;
        ll rem=k%s;
        ll afterflip=(rem==0 ? s : s-rem);
        ll r= m%k;
        ll ans;
        if(r==0)ans=afterflip;
        else ans=max(0LL,afterflip-r);
        cout<<ans<<"\n";
    }
    return 0;
}