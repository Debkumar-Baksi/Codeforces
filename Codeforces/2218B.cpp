#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int nums[7];
       for (int i=0;i<7;i++){
            cin>>nums[i];
       }
       sort(nums,nums+7);
       for(int i=0;i<6;i++){
        nums[i] *=-1;
       }
       int sum=0;
       for(int i=0;i<7;i++){
        sum +=nums[i];
       }
       cout<<sum<<endl;
    }
    return 0;
}