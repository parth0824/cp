#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    int s = n;
    unordered_map<int,pair<int,int>> u;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        u[i] = {x,s};
        s -= u.size();
    }
    int o = n-m;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        cout<<u[x].second - o<<endl;

    }


return 0;
}