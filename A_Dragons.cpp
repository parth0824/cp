#include <bits/stdc++.h>
using namespace std;
int main(){
    int s,n;cin>>s>>n;
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        p.push_back({x,y});
    }
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++){
        if(s > p[i].first){
            s += p[i].second;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
return  0;
}