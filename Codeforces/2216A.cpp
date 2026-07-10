#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        // a[i] stores the capacity of level i
        vector<int> a(k + 2);

        for (int i = 1; i <= k; i++) {
            cin >> a[i];
        }

        // Level k+1 has infinite capacity
        a[k + 1] = INT_MAX;

        // b[i] stores the current level of course i
        vector<int> b(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }

        vector<int> ops;

        // Simulate the greedy top-down unblocking
        while (true) {
            bool done = true;
            vector<int> c(k + 2, 0);

            // Count how many courses are currently at each level
            for (int i = 1; i <= n; i++) {
                c[b[i]]++;

                if (b[i] <= k) {
                    done = false; // Still courses to move
                }
            }

            if (done) break;

            // Find the first course we can validly move up
            for (int i = 1; i <= n; i++) {
                if (b[i] <= k && c[b[i] + 1] < a[b[i] + 1]) {
                    b[i]++;          // Move course up
                    ops.push_back(i); // Record operation
                    break;
                }
            }
        }

        cout << ops.size() << '\n';

        for (int i = 0; i < (int)ops.size(); i++) {
            if (i) cout << ' ';
            cout << ops[i];
        }

        cout << '\n';
    }

    return 0;
}