#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    //  (7 - 3 - 1) = 3.
    //  (100 - 1 - 2) = 97.
    int ma = INT_MIN;
    for(int i=0;i<v.size()-1;i++){
        int x = v[i]-v[i+1]-m;
        ma=max(ma,x);
        
    }
    if(ma < 0){
        cout<<0;
        return 0;
    }
    cout<<ma;
return 0;
}