#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    int ans = 0;
    vector<int> c;
    for(int i=0;i<n;i++){
        bool e=0;
        int x;cin>>x;
        for(int j=0;j<x;j++){
            int y;cin>>y;
            if(y < m && e==0){
                e=1;
                ans++;
                c.push_back(i+1);
            }
        }
    }
    sort(c.begin(),c.end());
    cout<<ans<<endl;
    for(auto i:c)cout<<i<<" ";

}
int main(){
    solve();
return 0;
}