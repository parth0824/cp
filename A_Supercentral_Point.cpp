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
    vpii v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    int i = 0;
    int ans = 0;
    while (i < v.size())
    {
        int j = 0;
        bool a, b, c, d;
        a = b = c = d = 0;
        while (j < v.size())
        {
            if (i == j)
            {
            }
            else
            {
                if (v[j].second > v[i].second && v[j].first == v[i].first)
                {
                    a = 1;
                }
                else if (v[j].second < v[i].second && v[j].first == v[i].first)
                {
                    b = 1;
                }
                else if (v[j].second == v[i].second && v[j].first > v[i].first)
                {
                    c = 1;
                }
                else if (v[j].second == v[i].second && v[j].first < v[i].first)
                {
                    d = 1;
                }
            }
            j++;
        }
        if (a && b && c && d)
        {
            ans++;
        }
        i++;
    }
    cout << ans << endl;
}