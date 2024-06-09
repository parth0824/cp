#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;cin>>n;
    vector<int> v;int x;
    while(n--){cin>>x;
        v.push_back(x);
    }
    int g = v[0];
    // for(int i=1;i<n;i++){
    //     g = __gcd(g,v[i]);
    // }
    cout<<__gcd(4,__gcd(12,__gcd(2,__gcd(6,3))))<<endl;
    // cout<<g<<endl;
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