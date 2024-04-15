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
    int t = count(v.begin(), v.end(), 2);
    if (t % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }
    else if (t == 0)
    {
        cout << 1 << endl;
        return;
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 2)
            c++;
        if (c == (t / 2))
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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