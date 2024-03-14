#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int i = 0, n;
    cin >> n;
    string s;
    cin >> s;
    s += '#';
    int k = 0;
    int ans = 0;
    while (i < s.size())
    {
        if (s[i] == '#')
        {
            if (k > 2)
            {
                cout << 2 << endl;
                return;
            }
            ans += k;
            k = 0;
        }
        else
        {
            k++;
        }
        i++;
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