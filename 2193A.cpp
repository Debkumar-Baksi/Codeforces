#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int> a(n);
        int sum_of_a=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sum_of_a+=a[i];
        }
        int diff=s-sum_of_a;
        if(s<sum_of_a) cout<<"NO\n";
        else if(sum_of_a==s || (sum_of_a+x)==s || diff%x==0) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}