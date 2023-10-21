// In the first test example the sequence of Xenia's moves along the ringroad looks as follows: 1 → 2 → 3 → 4 → 1 → 2 → 3. This is optimal sequence. So, she needs 6 time units.
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vll vector<ll>
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
    ll n, m;
    cin >> n >> m;
    vll v;
    v.pb(1);
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    ll sum = 0;
    for (int i = 1; i < m + 1; i++)
    {

        ll x = (v[i] - v[i - 1]);
        if (x < 0)
        {
            x += n;
        }
        sum += x;
    }
    cout << sum << endl;
    return 0;
}