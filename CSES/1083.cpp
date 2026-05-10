#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long sum_of_n=n*(n+1)/2;
    long long total=0;
    long long x;
    for(int i=0;i<n-1;i++){
        cin>>x;
        total+=x;
    }
    cout<<sum_of_n-total<<"\n";
    return 0;
}