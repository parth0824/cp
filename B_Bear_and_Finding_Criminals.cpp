#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
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

int main()
{
    int n, a;
    cin >> n >> a;
    int x;
    vi v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.pb(x);
    }
    a--;
    int i = 0;
    int ans = 0;
    while (true)
    {
        int x = a - i;
        int y = a + i;
        if (x == y && v[x])
            ans++;
        else if (x >= 0 && v[x] && y <= v.size() - 1 && v[y])
            ans += 2;
        else if ((x >= 0 && v[x] && y >= v.size()) || (y <= v.size() - 1 && v[y] && x < 0))
            ans++;
        else if (x < 0 && y >= v.size())
            break;
        i++;
    }
    cout << ans << endl;
    return 0;
}