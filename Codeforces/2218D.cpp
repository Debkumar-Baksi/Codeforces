#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<int> vk(n+13,1);
        for(long long i = 1; i <= n; i++){
            long long ik=2*i + 1;
            long long gc=gcd(ik,vk[i]);
            vk[i] *= ik/gc;
            gc=gcd(ik,vk[i+1]);
            vk[i+1] *=ik/gc;
            cout<<vk[i]<<" ";
        }
        cout << "\n";
    }
    return 0;
}