#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;

        ll groups = n / 3;
        ll rem = n % 3;

        ll cost = groups * min(3 * a, b)
                + min(rem * a, b);

        cout << cost << "\n";
    }

    return 0;
}