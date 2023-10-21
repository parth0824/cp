#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define vvb vector<vector<bool>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define umii unordered_map<int, int>
#define umci unordered_map<char, int>
#define umsi unordered_map<string, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>
#define pb push_back

void testcase()
{
    int n;
    cin >> n;
    vi v;
    v.pb(-1);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int y = v.size() - 1;
        if (v[y] != x)
        {
            v.pb(x);
        }
    }
    v.erase(v.begin());
    int count = 0;
    // if (v[0] < v[1])
    // {
    //     count++;
    // }
    // if (v[v.size() - 1] < v[v.size() - 2])
    // {
    //     count++;
    // }
    // if (count == 2)
    // {
    //     cout << "NO" << endl;
    //     return;
    // }
    // for (auto i : v)
    //     cout << i << " ";
    int i = 1;
    while (i < v.size() - 1)
    {
        if ((v[i] < v[i - 1]) && (v[i] < v[i + 1]))
        {
            count++;
        }
        if (count == 2)
        {
            cout << "NO" << endl;
            return;
        }
        i++;
    }
    cout << "YES" << endl;
}
void solve()
{
    int t;
    cin >> t;
    while (t)
    {
        t--;
        testcase();
    }
}
int main()
{
    solve();
    return 0;
}