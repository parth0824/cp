#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n = -1;
    cin >> n;
    stack<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (!s.empty() && s.top() > 0)
        {
            ll y = x + s.top();
            if (y > 0)
            {
                s.top() = y;
            }
            else
            {
                s.pop();
                s.push(y);
            }
        }
        else
        {
            s.push(x);
        }
    }
    ll ans = 0;
    while (!s.empty())
    {
        if (s.top() > 0)
            ans += s.top();
        s.pop();
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}