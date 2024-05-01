#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if (a < b)
        ans++;
    if (a < c)
        ans++;
    if (a < d)
        ans++;
    cout << ans << endl;
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