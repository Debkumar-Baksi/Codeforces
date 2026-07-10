#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,m;
    string s;
    cin>>n>>m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }
    // for (int i = 0; i < n; i++) {
    //     cout << grid[i] << endl;
    // }
    ll firstrow=-1,firstcol=-1;
    ll lastrow=-1,lastcol=-1;
    for(int i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(grid[i][j]=='B'){

                if(firstrow==-1){
                    firstrow=i+1;
                    firstcol=j+1;
                }
                lastrow=i+1;
                lastcol=j+1;

        }
        }
    }
    ll r=(firstrow+lastrow)/2;
    ll c=(firstcol+lastcol)/2;
    cout<<r<<" "<<c<<"\n";
    
    return 0;
}