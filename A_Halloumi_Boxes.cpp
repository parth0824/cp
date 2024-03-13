#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n, -1);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x;
    }
    x = -1;
    if (k <= 1)
    {
        for (auto i : v)
        {
            if (x > i)
            {
                cout << "NO" << endl;
                return;
            }
            x = i;
        }
    }
    cout << "YES" << endl;
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
