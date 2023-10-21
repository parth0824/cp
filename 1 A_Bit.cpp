// https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0;
    int n = -1;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if (s[1] == '-')
        {
            ans--;
        }
        else
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}