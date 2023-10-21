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

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    ll maxx = *max_element(v.begin(), v.end());
    ll minn = *min_element(v.begin(), v.end());
    ll maxxn = count(v.begin(), v.end(), maxx);
    ll minnn = count(v.begin(), v.end(), minn);
    ll ans1 = maxx - minn;
    ll ans2 = maxxn * minnn;
    if (ans1 == 0)
    {
        ans2 = (n * (n - 1)) / 2;
    }
    cout << ans1 << " " << ans2 << endl;
}
int main()
{
    solve();
    return 0;
}