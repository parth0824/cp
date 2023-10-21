#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x = 3;
    for (int i = 0; i < n; i++)
    {
        cout << x << " ";
        x += 2;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}