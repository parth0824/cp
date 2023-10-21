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
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << "I'm too stupid to solve this problem" << endl;
        return 0;
    }
    ll a = 0, b = 1, sum = 0, i = 0;
    vector<long long> v = {0, 1};
    while (sum < n)
    {
        sum = (a + b);
        v.pb(sum);
        a = b;
        b = sum;
        i++;
    }
    if (n <= 3 && n > 0)
    {
        for (int i = 0; i < n; i++)
            cout << 1 << " ";
    }
    else
    {
        auto it = find(v.begin(), v.end(), n);
        if (it == v.end())
        {
            cout << "I'm too stupid to solve this problem" << endl;
            return 0;
        }
        int i = (it)-v.begin();
        int x = v[i - 1];
        int y = v[i - 3];
        int z = v[i - 4];
        cout << z << " " << y << " " << x << endl;
    }
    return 0;
}