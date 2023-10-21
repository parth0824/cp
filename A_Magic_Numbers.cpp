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
    string s;
    cin >> s;
    s.pb('x');
    s.pb('x');
    s.pb('x');
    int i = 0;
    while (i < s.size() - 3)
    {
        // cout << i << " ";
        char a = s[i],b = s[i + 1],c = s[i + 2];
        if (a == '1' && b == '4' && c == '4')i += 2;
        else if (a == '1' && b == '4')i += 1;
        else{
            cout << "NO";
            return;
        }
        i++;
    }

    // cout << endl;
    cout << "YES" << endl;

    // 1 14 144
}
int main()
{
    solve();
    return 0;
}