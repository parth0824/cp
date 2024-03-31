#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    int x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i && (v.back() > x))
            v.push_back(1);
        v.push_back(x);
    }
    cout << v.size() << endl;
    for (auto i : v)
        cout << i << " ";
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
