#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(int x,int y){
    ll l=max(x,y)-1;
    if(l&1){
        if(x<y) cout<< l*l + x<<"\n";
        else cout<< l*l + 2*l - y +2<<"\n";
    }else{
        if(x<y) cout<< l*l + 2*l -x +2<<"\n";
        else cout<< l*l + y<<"\n";
    }
}
int main(){
    ll t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        solve(x,y);
    }
    return 0;
}