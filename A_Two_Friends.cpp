#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    int x;
    vector<int> v(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        x--;
        v[i] = x;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == v[v[i]] && i != v[i])
        {
            cout << 2 << endl;
            return;
        }
    }
    cout << 3 << endl;
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