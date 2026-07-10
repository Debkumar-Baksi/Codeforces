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
        int max_arr=*max_element(a.begin(),a.end());
        int count=0;
        for(int x:a){
            if(x==max_arr) count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}