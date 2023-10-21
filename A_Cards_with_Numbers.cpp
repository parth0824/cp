#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, x;
    cin >> n;
    map<int, vector<int>> u;
    for (int i = 1; i <= 2 * n; i++)
    {
        cin >> x;
        u[x].push_back(i);
    }
    bool chk = 0;
    for (auto i : u)
    {
        if (i.second.size() & 1)
        {
            cout << -1;
            chk = 1;
            break;
        }
    }
    if (!chk)
    {
        for (auto i : u)
        {
            int x = i.second.size();
            for (int j = 0; j < x; j += 2)
            {
                cout << i.second[j] << " " << i.second[j + 1] << endl;
            }
        }
    }
}