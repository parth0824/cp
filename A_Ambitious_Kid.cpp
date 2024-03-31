#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    int ans = INT_MAX;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans = min(ans, abs(x));
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
        solve();
    return 0;
}