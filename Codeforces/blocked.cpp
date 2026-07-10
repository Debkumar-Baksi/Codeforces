#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end(),greater<int>());
        bool hashduplicate = false;
        for(int i=0;i<n-1; i++){
            if(a[i]==a[i+1]){
                hashduplicate = true;
                break;
            }
        }

        if (hashduplicate){
            cout<< -1 << "\n";
        } else {
            for(int i=0;i<n;i++){
                cout << a[i];
                if(i<n-1) cout<<" ";
            }
            cout << "\n";
        }
    }

    return 0;

}