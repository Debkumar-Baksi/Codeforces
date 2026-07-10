#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int ones_threes = 0;
        int twos = 0;
        for (char c : s) {
            if (c == '1' || c == '3') {
                ones_threes++;
            }
            else if (c == '2') {
                twos++;
            }
        }
        int keep = max(ones_threes, twos);
        cout << n - keep << '\n';
    }
    return 0;
}