#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, m, x;
    cin >> n >> m;
    vector<ll> d(n, -1);
    ll pre = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        d[i] = x + pre;
        pre = d[i];
    }
    ll j = 1;
    ll h = 0;
    for (ll i = 0; i < m; i++)
    {
        cin >> x;
        while (x > d[j - 1])
        {
            h = d[j - 1];
            j++;
        }

        cout << j << " ";
        cout << x - h<< endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    // cin >> t;
    t = 1;
    while (t--)
        solve();
    return 0;
}