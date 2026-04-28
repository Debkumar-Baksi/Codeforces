#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    vector<int> sure(3);
    int total=0;
    while(t--){
        for(int i=0;i<3;i++){
            cin>>sure[i];
        }
        int sum=0;
        for(int i=0; i<3;i++){
            sum+=sure[i];
        }
        if(sum>=2) total+=1;
    }
    cout<<total<<"\n";
    return 0;
}