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
    int i = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    vi u = v;

    sort(u.begin(), u.end());

    int x = u[u.size() - 1];
    int y = u[u.size() - 2];

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            v[i] -= y;
        }
        else
        {
            v[i] -= x;
        }
    }

    for (auto i : v)
        cout << i << " ";
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        testcase();
    }
}
int main()
{
    solve();
    return 0;
}