#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        bool startswitheven=false;
        if(a[0]%2==0) startswitheven=true;
        if(startswitheven){
            bool nexttwo=true;
            for(int i=0;i<n;i+=2){
                if(a[i]%2!=0) nexttwo = false;
            }
            if(nexttwo) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else{
            bool nextnottwo=true;
            for(int i=0;i<n;i+=2){
                if(a[i]%2==0) nextnottwo = false;
            }
            if(nextnottwo) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}