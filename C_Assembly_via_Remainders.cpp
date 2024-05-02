#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int x, n;
    cin >> n;
    vector<int> v(n - 1, -1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        v[i] = x;
    }
    vector<int> ans(n, -1);

    ans[0] = 985;
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] + v[i - 1];
    }

    for (auto i : ans)
        cout << i << " ";
    cout << endl;
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
