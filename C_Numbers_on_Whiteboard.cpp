#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n = -1;
    cin >> n;
    cout << 2 << endl;
    int a = n, b = n - 1;
    while (n > 1)
    {
        int c = b - 1;
        cout << a << " " << b << endl;
        a += b;
        if ((a) % 2 == 1)
        {
            a /= 2;
            a += 1;
        }
        else
        {
            a /= 2;
        }
        n--;
        b = c;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}