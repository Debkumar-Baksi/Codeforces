#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    priority_queue<int> pq;
    map<int,int> hm;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        hm[arr[i]]++;
    }
    int i=n-1;
    int ans=0;
    while(!pq.empty() && i>=0){
        int curr=pq.top();
        if(hm[curr]>0){
            if(arr[i]==curr){
                ans++;
                pq.pop();
            }
            hm[arr[i]]--;
            i--;
        }
        else pq.pop();
    }
    cout<<ans<<"\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}