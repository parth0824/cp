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
    vi v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    pii p;
    int i = 0;
    int m = INT_MAX;
    while (i < v.size())
    {
        if (i == v.size() - 1)
        {
            int a = v[i] - v[0];
            if (abs(a) < m)
            {
                p.first = i;
                p.second = 0;
            }
        }
        else
        {
            if (abs(v[i] - v[i + 1]) < m)
            {
                p.first = i;
                p.second = i + 1;
                m = abs(v[i] - v[i + 1]);
            }
        }
        i++;
    }
    cout << p.first + 1 << " " << p.second + 1;
    return 0;
}