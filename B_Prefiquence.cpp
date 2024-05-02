#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,m;cin>>n>>m;
    string a,b;cin>>a>>b;
    int i = 0, j = 0,ans = 0;
    while(i < n && j < m){
        if(a[i] == b[j]){
            ans++;
            i++;j++;
        }
        else{
            j++;
        }
    }
    cout<<ans<<endl;
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