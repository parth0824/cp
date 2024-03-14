#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, m, x;
    cin >> n >> m;
    vector<int> v(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x;
    } 
    int ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        int t = v[i + 1] - v[i];
        ans = max(ans, t);
    }
    int f = v[0]; 
    int l = 2 * (m - v[v.size() - 1]);
    ans = max(ans,max(f, l));
    cout << ans << endl;
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