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
    int t;
    cin >> t;
    vector<int> a;
    int sum = 0;
    for (int i = 0; i < 10000; i++)
    {
        sum += i;
        a.push_back(sum);
    }
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        int sum = 0;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            v.pb(x);
        }
        auto it = find(a.begin(), a.end(), (sum + m)) - a.begin();

        if (it > 100)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<int> chk;
            int summ = 0;
            for (int i = 1; i <= it; i++)
            {
                auto it = find(v.begin(), v.end(), i);
                if (it == v.end())
                {
                    chk.pb(i);
                    summ += i;
                }
            }
            if (summ == m)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}