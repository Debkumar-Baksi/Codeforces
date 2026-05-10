#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n;
    cin>>n; //5
    if(n<4 && n>1) cout<<"NO SOLUTION"<<"\n";
    else if (n==1) cout<<n<<"\n";
    else{
    vector<int> odd; //3
    vector<int> even; //2
    for(ll i=1;i<=n;i++) {
        if(i%2==0) even.push_back(i); //[2,4]
        if(i%2!=0) odd.push_back(i); //[1,3,5]
    }
    // cout<<odd.size()<<" "<<even.size()<<"\n";
    for(ll i=0;i<even.size();i++) cout<<even[i]<<" ";
    for(ll i=0;i<odd.size();i++) cout<<odd[i]<<" ";
        }
    return 0;
}