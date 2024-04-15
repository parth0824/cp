#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        while (n)
        {
            cout << 1 << " ";
            n--;
        }
        cout << endl;
        return;
    }
    if (k > 1)
    {
        if (n % 2 == 0)
        {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            while (n > 0)
            {
                cout << 2 << " ";
                n -= 2;
            }
            cout << endl;
            return;
        }
        else
        {
            if (n >= 3)
            {
                if (k >= 3)
                {
                    vector<int> v;
                    v.push_back(3);
                    int s = 3;
                    while (s < n)
                    {
                        v.push_back(2);
                        s += 2;
                    }
 
                    if (s == n)
                    {
                        cout << "YES" << endl;
                        cout << v.size() << endl;
                        for (auto i : v)
                            cout << i << " ";
                        cout << endl;
                        return ;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;
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