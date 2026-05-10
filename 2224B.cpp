#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long total_sum = 0;
    long long current_mex = 0;
    vector<int> max_array;
    for (int i = 0; i < n; i++) {
        if (a[i] == current_mex) {
            current_mex++;
        } else if (a[i] > current_mex) {
        }
        max_array.push_back(a[i]);
        total_sum += (current_mex + *max_element(max_array.begin(), max_array.end()));
    }

    cout << total_sum << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}