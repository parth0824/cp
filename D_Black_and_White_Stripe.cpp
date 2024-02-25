#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, ans = INT_MAX, w = 0, b = 0;
    cin >> n >> m;
    string s;
    cin >> s;
    for (int i = 0; i < m; i++)
    {
        if (s[i] == 'W')
        {
            w++;
        }
        else
        {
            b++;
        }
    }
    ans = min(ans, w);
    int p = 0;
    for (int i = m; i < n; i++)
    { 
        if (s[p] == 'W')
        {
            w--;
        }
        else
        {
            b--;
        }
        if (s[i] == 'W')
        {
            w++;
        }
        else
        {
            b++;
        }
        p++;
        ans = min(ans, w);
    }
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