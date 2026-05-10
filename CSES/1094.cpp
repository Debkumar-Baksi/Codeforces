#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<int> a(n);
    for(long long i=0;i<n;i++) cin>>a[i];
    long long total =0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]) {
            total+=a[i-1]-a[i];
            a[i]+=a[i-1]-a[i];
        } 
    }
    cout<<total<<"\n";
    return 0;
}