#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    string s;
    cin >> s;
    int z = 0, o = 0;
    for (auto i : s)
    {
        if (i == '0')
            z++;
        else
            o++;
    }
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (z)
            {
                z--;
            }
            else
            {
                cout << s.size() - i << '\n';
                return;
            }
        }
        else
        {
            if (o)
            {
                o--;
            }
            else
            {
                cout << s.size() - i << '\n';
                return;
            }
        }
    }
    cout << 0 << '\n';
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