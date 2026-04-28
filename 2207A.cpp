#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      // int min=0,max=0;
      for(int i=1;i<n;i++){
        if(s[i-1]=='1' && s[i+1]=='1') s[i]='1';
        // cout<<s<<endl;
    }
    int ones_max = count(s.begin(), s.end(), '1');
    // cout<<s<<endl;
    for(int i=1;i<n;i++){
        if(s[i-1]=='1' && s[i+1]=='1') s[i]='0';
        // cout<<s<<endl;
    }
    int ones_min = count(s.begin(), s.end(), '1');
    cout << ones_min << " "<< ones_max << endl;
}
 return 0;
}