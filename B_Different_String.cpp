#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    set<char> m;
    string s;cin>>s;
    for(auto i : s)m.insert(i);
    if(m.size() > 1){
        cout<<"YES\n";
        string x = s;
        reverse(s.begin(),s.end());
        if(x == s){ // for palindromic string
            char y = s[s.size()-1];
            s.pop_back();
            s = y + s;
        }

        cout<<s<<"\n";
    }
    else{
        cout<<"NO\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}