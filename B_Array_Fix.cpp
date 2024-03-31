#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n, -1);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x;
    }
    int pre = v[0];
    for (int i = 1; i < n; i++)
    {
        if (pre > v[i])
        {
            string s = to_string(pre);
            string y = to_string(v[i]);
            string ans = s + y;
            char w = ans[0];
            for (int q = 1; q < ans.size(); q++)
            {
                if (w > ans[q])
                {
                    cout << "NO";
                    cout << endl;
                    return;
                }
                w = ans[q];
            }
            if (!is_sorted(ans.begin(), ans.end()))
            {
                cout << "NO";
                cout << endl;
                return;
            }
        }
        pre = v[i];
    }
    cout << "YES";
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
    return 0;
}