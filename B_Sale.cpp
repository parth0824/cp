#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
            v.push_back(x);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int i = 0;

    while (i < v.size() && i < m)
    {
        ans += v[i];
        i++;
    }

    cout << ans * (-1);
    return 0;
}