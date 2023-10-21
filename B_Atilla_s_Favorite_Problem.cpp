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
    int a;
    cin >> a;
    string n;
    cin >> n;
    int maxx = INT_MIN;
    int i = 0;
    while (i < n.size())
    {

        maxx = max(maxx, n[i] - 'a');
        i++;
    }
    cout << maxx + 1 << endl;
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