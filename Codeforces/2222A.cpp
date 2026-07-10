#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> array(n);
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        bool found=false;
        for(int i=0;i<array.size();i++){
            if (array[i]==100){
                found=true;
                break;
            }
        }
        if(found) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}