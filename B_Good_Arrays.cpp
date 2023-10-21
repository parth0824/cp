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

void solve()
{
    int n;
    cin >> n;
    ll minn = INT_MAX;
    ll maxx = INT_MIN;
    ll x;
    int r=0;
    unsigned long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        if(x == 1)r++;
    } 

    if ((sum >= r + n) && n != 1)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}