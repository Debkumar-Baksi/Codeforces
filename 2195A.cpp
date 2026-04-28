#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool found_67=false;
        // bool found_1=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            // if(arr[i]==1) found_1=true;
            if(arr[i]==67) found_67=true;
        }
        if(found_67) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}