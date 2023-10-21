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

int main(){
    int n, c;
    cin >> n >> c;
    int x;
    vi v;
    int ans = 1;
    for (int i = 0; i < n; i++){
        cin >> x;
        v.pb(x);
    }
    for (int i = 1; i < n; i++){
        if (v[i] - v[i - 1] <= c) ans++;
        else ans = 1;
    }
    cout << ans << endl;
    return 0;
}