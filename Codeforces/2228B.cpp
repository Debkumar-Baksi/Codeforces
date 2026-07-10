#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
        long long x = abs(x1 - x2);
        int ans = min(x, n - x);
        if(n<4) cout<<ans<<"\n";
        else cout<<ans+k<<"\n";
    }
    return 0;
}