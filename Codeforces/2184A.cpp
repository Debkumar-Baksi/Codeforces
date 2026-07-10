/*
n o/p
1  1
2  2
3  3
4  0
5  1
6  0
7  1
8  0
9  1
10 0
11 1
12 0
13 



*/



#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(n<=3? n : (n & 1))<<endl;
        // if(n==1 || n==2 || n==3) cout<<n<<endl;
        // else if(n%2==0) cout<<0<<endl;
        // else cout<<1<<endl;
    }
    return 0;
}