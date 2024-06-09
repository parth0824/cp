#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == 0 || j == m - 1 || i == 0 || i == n - 1)
                cout << "*";
            else
                cout << ".";
        }
        cout << "\n";
    }
    cout << "\n";
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