#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    set<int> ans;
    while (m--)
    {
        int s;
        char d;
        cin >> s >> d;
        if (d == '0')
        { // c
            int cc = (x + s) % n;
            if (cc == 0)
                cc = n;
            x = cc;
            ans.insert(cc);
        }
        else if (d == '1')
        { // ac
            int yy = n + x;
            int ac = (yy - s);
            if (ac == 0)
                ac = n;
            x = ac;
            ans.insert(ac);
        }
        else
        {
            int cc = (x + s) % n;
            if (cc == 0)
                cc = n;
            ans.insert(cc);
            int ac = (x + n - s) % n;
            if (ac == 0)
                ac = n;
            x = ac;
            ans.insert(ac);
        }
    }
    cout << ans.size() << endl;
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}
void ss(int n, int init, int dist, char dire, unordered_set<int> &s)
{
    
}
void solve1()
{
    int n, m, x;
    cin >> n >> m >> x;
    unordered_set<int> s;
    while (m--)
    {
        int dist;
        cin >> dist;
        char direction;
        cin >> direction;
        ss(n, x, dist, direction, s);
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