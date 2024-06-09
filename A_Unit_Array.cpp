#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int x, t;
    cin >> t;
    int p = 0, n = 0;
    while (t--)
    {
        cin >> x;
        if (x == 1)
            p++;
        else
            n++;
    }
    int ans = 0;
    while (n > p)
    {
        int x = (n - p);
        if (x == 1)
            break;
        p += (x / 2);
        n -= (x / 2);
        ans += (x / 2);
    }
    if (n - p == 1)
    {
        p += 1;
        n -= 1;
        ans += 1;
    }
    if (n % 2 == 1)
        ans++;
    cout << ans << "\n";
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