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
    int a, b, c;
    cin >> a >> b >> c;
    int maxx = max(a, (max(b, c)));
    int minn = min(a, (min(b, c)));
    int sum = a + b + c - maxx - minn;
    cout << sum << endl;
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}
int main()
{
    solve();
    return 0;
}