#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,m;cin>>n>>m;
    if((n % (2+m) == 0) || (n % 2 == 0) || (n % m == 0) || ((n-2) % m == 0) || ((n-m) % 2 == 0))cout<<"YES\n";
    else cout<<"NO\n";
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