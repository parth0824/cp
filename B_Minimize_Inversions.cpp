// (i,j) such that i<j and pi>pj

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, n;
    cin >> n;
    vector<int> v(n, -1), u(n, -1);
    for (int i = 0; i < n; i++)
        cin >> x, v[i] = x;
        
    for (int i = 0; i < n; i++)
        cin >> x, u[i] = x;
    vector<pair<int, int>> h;
    for (int i = 0; i < n; i++)
        h.push_back({v[i], u[i]});
    sort(h.begin(), h.end());
    for (auto i : h)
        cout << i.first << " ";
    cout << endl;
    for (auto i : h)
        cout << i.second << " ";
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