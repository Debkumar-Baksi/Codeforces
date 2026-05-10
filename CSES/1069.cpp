#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long current=1;
    long long longest=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]) current++;
        else current=1;
        longest=max(current,longest);
    }
    cout<<longest<<"\n";
    return 0;
}