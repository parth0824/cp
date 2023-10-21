//  how many times during the championship is a host team going to put on the guest uniform? Note that the order of the games does not affect this number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        v.push_back({x,y});
    }
    int ans = 0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(i == j)continue;
            if(v[i].first == v[j].second){
                ++ans;
            }
            
        }
    }
    cout<<ans;
return 0;
}