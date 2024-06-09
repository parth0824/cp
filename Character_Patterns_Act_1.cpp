#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,m;cin>>n>>m;
    bool chk = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(chk){
                cout<<"*";
            }
            else{
                cout<<".";
            }
            chk = !chk;
        }
        if(m % 2 == 0) chk = !chk;
        cout<<'\n';
    }
    cout<<'\n';
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