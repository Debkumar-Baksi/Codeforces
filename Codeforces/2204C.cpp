#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,m;
        cin>>a>>b>>c>>m;
        ll A=m/a; ll B=m/b; ll C=m/c;
        ll AB=m/lcm(a,b); ll BC=m/lcm(b,c); ll AC=m/lcm(a,c);
        ll ABC=m/lcm(a,lcm(b,c));
        AB-=ABC; BC-=ABC; AC-=ABC;
        A-=(AB+AC+ABC);B-=(AB+BC+ABC);C-=(BC+AC+ABC);
        cout<<(A*6 + (AB+AC)*3 + ABC*2)<<" ";
        cout<<(B*6 + (AB+BC)*3 + ABC*2)<<" ";
        cout<<(C*6 + (BC+AC)*3 + ABC*2)<<"\n";
    }
    return 0;
}