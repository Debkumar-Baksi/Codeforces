#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long s = x+y;
        if(s>=0 && s%3==0 && s/3 >= abs(y)){
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}