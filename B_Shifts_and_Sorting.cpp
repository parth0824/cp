#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    int n = s.size();

    int l = 0, r = 0;
    int i = 0;
    while (s[i] == '0')
        l++, r++, i++;

    while (l < n && r < n)
    {
        while (r < n && s[r] != '0')
        {
            r++;
        }
        int add = r - l + 1;
        ans += add;
        swap(s[l], s[r]); 
        while(r < n && s[r] == '1')r++;
        while(l < n && s[l] == '0')l++;
    }

    cout << ans << endl;
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