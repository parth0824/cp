#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    string s = "";
    int i = 0;
    while (i < n)
    {
        char x;
        cin >> x;
        s += x;
        i++;
    }
    string chk = s;
    unordered_map<char, int> u;
    for (auto i : s)
        u[i]++;
    int cnt = 0;
    if ((int)u.size() == 1)
    {
        cout << cnt << endl;
        return 0;
    }
    while (true)
    {
        cnt++;
        char x = s[k - 1];
        u[x]++;
        s += x;
        u[s[0]]--;
        if (u[s[0]] == 0)
        {
            u.erase(s[0]);
        }
        if ((int)u.size() == 1)
        {
            cout << cnt << endl;
            return 0;
        }
        s.erase(s.begin());
        if (s == chk)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    return 0;
}