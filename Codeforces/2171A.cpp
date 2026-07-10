/*
num   o/p
 1    0
 2    1
 4    2
 6    2
 8    3
 10   3
 12   4
 14   4
 16   5
 18   5

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        if(num%2!=0) cout<<0<<"\n";
        else{
        int result = (num / 4) + 1;
        cout<<result<<endl;
        }
    }
    return 0;
}