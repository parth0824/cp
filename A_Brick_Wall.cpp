#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;cin>>n>>m;
    m /= 2;
    cout<<n*m<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}