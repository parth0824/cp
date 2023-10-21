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
    int n;
    cin >> n;
    int m;
    cin >> m;
    vpii vp;
    for (int i = 0; i < n; i++)
    {
        int x, y = i + 1;
        cin >> x;
        vp.push_back({x, y});
    }
    int i = 0;

    while (vp.size() != 1)
    {
        int c = vp[i].first;
        if (c <= m)
        {
            vp.erase(vp.begin());
        }
        else
        {
            int d = c - m;
            int e = vp[i].second;
            vp.erase(vp.begin());
            vp.push_back({d, e});
        }
    }
    cout << vp[0].second;
}