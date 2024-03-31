#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int isUgly(vector<int> &v, int h, int sum)
{
    int n = v.size();
    for (int i = h; i < n; i++)
    {
        if (sum == v[i])
        {
            return i;
        }
        sum += v[i];
    }
    return -1;
}
void solve()
{
    int n, x;
    cin >> n;
    int sum = 0;
    vector<int> v(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x;
    }
    int h = 1;
    sum = v[0];
    while (h < n)
    {
        int r = v[h];
        int chk = isUgly(v, h, sum);
        if (chk == -1 && (v[h] != v[h - 1]))
        {
            break;
        }
        else
        {
            swap(v[h], v[h - 1]);
        }
        sum += r;
        h++;
    }
    int d = isUgly(v, 1, v[0]);
    if (d == -1)
    {
        cout << "YES" << endl;
        for (auto i : v) cout << i << " ";cout << endl;
    }
    else
    {
        cout << "NO" << endl;
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
    return 0;
}
