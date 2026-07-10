#include<bits/stdc++.h>
using namespace std;

vector<int> primeFact(int n){
    vector<int> res;
    if(n%2==0){
        res.push_back(2);
        while(n%2==0) n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i == 0){
            res.push_back(i);
            while(n%i==0) n/=i;
        }
    }
    if(n>2) res.push_back(n);
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> result=primeFact(n);
        // for(int x : result){
        //     cout << x << " ";
        // }
        // cout << "\n";
        int res_size=result.size();
        int ans=1;
        for(int i=0;i<res_size;i++){
            ans*=result[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}