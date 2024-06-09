#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    string s;cin>>s;
    int ans = 0;
    char p = s[0];
    int n = s.size();
    bool chk = 0;
    int i = 1;
    while(i < n){
        bool chk = 0;
        while(p == '0' && s[i] == '1'){
            chk = 1;
            p = s[i];
            i++;ans++;
        }
        while(p == '1' && s[i] == '0'){
            chk = 1;
            p = s[i];ans++;
            i++;
        }
        if(!chk) i++;
    }
    cout<<ans<<"\n";
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