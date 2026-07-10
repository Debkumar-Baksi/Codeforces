#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        bool same=true;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                same=false;
                break;
            }
        }
        cout<<(same ? "YES\n" : "NO\n");
    }
    return 0;
}