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
        vector<int> mul6,mul2_only,others,mul3_only;
        for(int i=0;i<n;i++){
            if(a[i]%6==0) mul6.push_back(a[i]);
            else if(a[i]%2==0) mul2_only.push_back(a[i]);
            else if(a[i]%3==0) mul3_only.push_back(a[i]);
            else others.push_back(a[i]);
        }
        for(int x:mul6) cout<<x<<" ";
        for(int x:mul2_only) cout<<x<<" ";
        for(int x:others) cout<<x<<" ";
        for(int x:mul3_only) cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}