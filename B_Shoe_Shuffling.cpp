#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n = -1;
    cin >> n;
    vector<int> v(n, -1);
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x;
    }
    map<int, int> s;
    for (auto i : v)
        s[i]++;
    for (auto i : s)
    {
        if (i.second < 2)
        {
            cout << -1 << endl;
            return;
        }
    }
    int pre = -1;
    vector<int> ans(n, -1);
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            if (ans[i - 1] != -1)
            {
                ans[i] = ans[i - 1];
            }
            else
            {
                ans[i] = i - 1;
            }
            ans[i - 1] = i;
        }
    }
    for (auto i : ans)
        cout << i + 1 << " ";
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}