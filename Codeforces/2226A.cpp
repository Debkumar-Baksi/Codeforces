#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        // 1. Check if all elements are same
        bool allSame = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                allSame = false;
                break;
            }
        }
        if (allSame) {
            cout << a[0]*n << "\n";
            continue;
        }
        // 2. Check strictly decreasing
        bool decreasing = true;
        for (int i = 1; i < n; i++) {
            if (a[i] >= a[i - 1]) {
                decreasing = false;
                break;
            }
        }
        if (decreasing) {
            long long prod = 1;
            for (int x : a) prod *= x;
            cout << prod << "\n";
            continue;
        }
        // 3. Remove all 1s and sum remaining
        long long sum = 0;
        for (int x : a) {
            if (x != 1) sum += x;
        }
        cout << sum << "\n";
    }
    return 0;
}