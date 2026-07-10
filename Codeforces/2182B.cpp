/*
a  b    o/p
------------
1  1 -> 1
1  2 -> 2
3  1 -> 2
4  3 -> 2
5  2 -> 3

*/


#include<bits/stdc++.h>
using namespace std;

int get_total_a(int a,int b,int total){
    while(a>=pow(2.0,total)){
        a-=pow(2.0,total);
        total++;
        if(b>=pow(2.0,total)){
            b-=pow(2.0,total);
            total++;
        }
        else break;
    }
    return total;
}

int get_total_b(int a,int b,int total){
    while(b>=pow(2.0,total)){
        b-=pow(2.0,total);
        total++;
        if(a>=pow(2.0,total)){
            a-=pow(2.0,total);
            total++;
        }
        else break;
    }
    return total;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int total=0;
        int result=max(get_total_a(a,b,total),get_total_b(a,b,total));
        cout<<result<<endl;
    }
    return 0;
}