#include <bits/stdc++.h>
using namespace std;
#define from(i, n) for (int i = 0; i < int(n); i++)
void solve()
{
    int n, m, ans = INT_MAX, w = 0, b = 0;
    cin >> n >> m;
    string s;
    cin >> s;
    from(i,m)
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
    from(i,m)
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