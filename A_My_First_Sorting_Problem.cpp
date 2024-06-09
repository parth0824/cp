#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,m;
    cin>>n>>m;
    cout<<min(n,m)   <<" ";
    cout<<max(n,m)   <<'\n';
}
int main()
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