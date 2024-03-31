#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, m;
    cin >> n >> m;
    if (m == 0)
    {
        cout << n << endl;
        return;
    }
    else if (n == m)
    {
        cout << 1 << endl;
        return;
    }
    int x = (n * (n - 1)) / 2;
    int req = n - 1;
    int e = n;

    while (m > 0)
    {
        m -= req;
        req--;
        e--;
    }
    if (m < 0)
        e++;
    cout << e << endl;
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