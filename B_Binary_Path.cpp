#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void findpath(vector<vector<char>> &v, int i, int j, int n, int m, string help, int &cnt, string &x)
{
    if (i == n && j == m)
    {
        help += v[i][j];
        if (help < x)
        {
            x = help;
            cnt = 1;
        }
        else if(help == x)
        {
            cnt++;
        }

        return;
    }
    if (i > n)
        return;
    if (j > m)
        return; 
    
    findpath(v, i + 1, j, n, m, help + v[i][j], cnt, x);
    findpath(v, i, j + 1, n, m, help + v[i][j], cnt, x);
}
void solve()
{
    int n;
    cin >> n;
    vector<vector<char>> v;
    for (int i = 0; i < 2; i++)
    {
        vector<char> h;
        char x;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            h.push_back(x);
        }
        v.push_back(h);
    }
    string ans = "";
    for (int i = 0; i < 1 + n; i++)
        ans += "1";
    string help = "";
    int num = 0; 
    findpath(v, 0, 0, 1, n - 1, help, num, ans);
    cout << ans << endl;
    cout << num << endl;
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