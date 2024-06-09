#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, k;
    cin >> n >> k;
    if (n % k == 0)
    {
        cout << 2 << "\n";
        cout << n - 1 << " " << 1 << "\n";
    }
    else
    {
        cout << 1 << "\n";
        cout << n << "\n";
    }
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