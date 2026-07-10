#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            long long n,a,b,c;
            cin>>n>>a>>b>>c;
            long long cycle = a+b+c;
            long long full_cycles = n/cycle;
            long long rem = n%cycle;
            long long days = full_cycles*3;

            if(rem<=0) cout<<days<<"\n";
            else if (rem<=a) cout<<days+1<<"\n";
            else if (rem <=a+b) cout<<days+2<<"\n";
            else cout<<days+3<<"\n";
    }
    return 0;
}