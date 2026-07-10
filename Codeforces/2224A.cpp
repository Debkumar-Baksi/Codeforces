// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         for(int i=0;i<n;i++) cin>>a[i];
//         int len=a.size();
//         int index=0;
//         for(int i=len-1;i>=0;i--){
//             if (a[i]>0) {
//                 cout<<len-index<<"\n";
//                 break;
//             }
//             index++;
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int positive_count = 0;
    long long current_val = a[n - 1];
    if (current_val > 0) positive_count++;
    for (int i = n - 2; i >= 0; i--) {
        long long potential_a_i = a[i];
        if (current_val > 0) {
            potential_a_i += current_val;
        }
        current_val = potential_a_i;
        if (current_val > 0) {
            positive_count++;
        }
    }

    cout << positive_count << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}