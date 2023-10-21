#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;cin>>n;
    int ma=0,mi=n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++){
        if((v[i-1].first < v[i].first) && (v[i].second < v[i-1].second)){
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
return 0;
}