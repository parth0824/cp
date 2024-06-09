#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> a;
    for (auto i : s)
        a.insert(i);
    string help = "";
    for (auto i : a)
        help += i;
    vector<char> v(26, '.');
    int m = help.size();
    int l = 0, h = m - 1;
    for (int i = 0; i <= m / 2; i++)
    {
        v[help[l] - 'a'] = help[h];
        v[help[h] - 'a'] = help[l];
        l++;
        h--;
    }
    for (int i = 0; i < n; i++)
    {
        s[i] = v[s[i] - 'a'];
    }
    cout << s << endl;
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