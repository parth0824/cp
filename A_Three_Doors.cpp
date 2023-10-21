#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a;cin>>a;
        vector<int> x;
        for(int i=0;i<3;i++){
            int y;cin>>y;
            x.push_back(y);
        }
        int y = x[a - 1];
        if(y == 0){
            cout<<"NO\n";
            continue;
        }
        int z = x[y - 1];
        if(z == 0){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
    }
return 0;
}