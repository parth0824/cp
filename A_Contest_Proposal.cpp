#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int x, n;
    cin >> n;

    deque<int> qa, qb;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        qa.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        qb.push_back(x);
    }
    x = n;
    n = 0;
    while (qa.size() > 0)
    {
        if (qa.front() > qb.front())
        {
            n++;
            qa.pop_back();
            qb.pop_front();
        }
        else
        {
            qb.pop_front();
            qa.pop_front();
        }
    }
    cout << n << endl;
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