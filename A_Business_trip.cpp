#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << n;
        return 0;
    }
    vector<int> v;
    for (int i = 0; i < 12; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int sum = 0;
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        sum += v[i];
        ans++;
        if (sum >= n)
        {
            cout << ans;
            return 0;
        }
    }
    cout << -1;
    return 0;
}