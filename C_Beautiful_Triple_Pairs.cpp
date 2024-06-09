#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;cin>>n;int x;
    vector<int> v(n,-1);
    for(int i=0;i<n;i++){
        cin>>x;
        v[i] = x;
    }
    vector<vector<int>> f; 
    for(int i=0;i<n-2;i++){
        vector<int> d;
        for(int j=i;j<i+3;j++){
            d.push_back(v[j]);
        }
        f.push_back(d);
    } 
    int ans = 0;
    for(int i=0;i<f.size();i++){
        for(int j=i+1;j<f.size();j++){
            int same = 0;
            for(int k=0;k<3;k++){ 
                if(f[i][k] == f[j][k]){
                    same++;
                }
            } 
            if(same == 2){
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}