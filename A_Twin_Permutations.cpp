#include <bits/stdc++.h>
using namespace std;
#define int long long
void f(vector<int> &v, vector<int> &n, int pre, int i)
{
    if (i == v.size())
        return;
}
void solve()
{
    int n;
    cin >> n;
    int m = n * 2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int p = m - x - (n);
        cout << p + 1 << " ";
    }
    cout << "\n";
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