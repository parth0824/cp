#include <bits/stdc++.h>
using namespace std;
void solve(int n, int m)
{
    int maxx = n / m;        // 10/3->3
    int mm = n - (maxx * m); // 10 - (3*3) -> 1
    if (mm == 0)
    {
        cout << maxx     << endl;
        return;
    }
    if ((maxx % mm) == 0 && (mm != 1))
    {
        cout << maxx << endl;
    }
    else
    {
        cout << maxx - 1 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    int n, m;
    while (t--)
    {
        cin >> n >> m;
        solve(n, m);
    }
}