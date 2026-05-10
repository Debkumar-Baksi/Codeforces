#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> p(n+1);
        for(int i = 1; i <= n; i++) cin >> p[i];
        
        int ans = 0;
        bool marked[n+1] = {};
        
        for(int i = 1; i <= n; i++){
            if(marked[i]) break;
            if(p[i] <= i){  // safe to sit
                ans++;
                marked[p[i]] = true;
            }
        }
        cout << ans << "\n";
    }
}