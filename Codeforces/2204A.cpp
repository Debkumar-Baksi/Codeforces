#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int num=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                num++;
                break;
            }
            else if (s[i]=='R') num++;
        }
        cout<<num<<"\n";
    }
    return 0;
}