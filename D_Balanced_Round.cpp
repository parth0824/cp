#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,k,x;cin>>n>>k;
    int ans = 0;
    int pre = -1;
    for(int i=0;i<n;i++){
        cin>>x;
        if(pre != -1){
            int ab = abs(pre-x);
            if(ab > k){
                ans++;
            }
        }
        pre = x;
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