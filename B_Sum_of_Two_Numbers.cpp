#include <bits/stdc++.h>
using namespace std;
bool chk(int i, int j)
{
    int a = 0, b = 0;
    while (i)
    {
        a += (i % 10);
        i /= 10;
    }
    while (j)
    {
        b += (j % 10);
        j /= 10;
    }
    bool ans = 0;
    if ((a + 1 == b) || (b + 1 == a) || (a == b))
        ans = 1;
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    int x = 0, y = -1;
    for (int i = n; i >= 0; i--)
    {
        if (i + x == n)
        {
            if (chk(i, x))
            {
                cout << i << " " << x << endl;
                return;
            }
        }
        x++;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}