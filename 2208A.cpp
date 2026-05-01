#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        map<int,int> freq;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                int x; cin >> x;
                freq[x]++;
            }
        
        bool possible = true;
        for(auto& [color, cnt] : freq)
            if(cnt > n * (n - 1))  // more than n²-n occurrences
                possible = false;
        
        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}