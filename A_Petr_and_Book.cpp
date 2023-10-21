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

int main()
{
    int total;
    cin >> total;
    int ans = -1;
    int i = 0;
    vi v;
    for (int i = 0; i < 7; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    while (1)
    {
        int sub = v[i];
        if (total > 0 && sub != 0)
        {
            total -= sub;
            ans = i + 1;
        }
        if (total <= 0)
            break;
        i++;
        if (i == 7)
            i = 0;
    }
    cout << ans << endl;
    return 0;
}