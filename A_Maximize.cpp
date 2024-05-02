#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;cin>>n;
    int ans = -1,fans = -1;
    for(int i=1;i<n;i++){
        int x = __gcd(n,i) + i;
        if(ans < x){
            fans = i;
            ans = x;
        }
    }
    cout<<fans<<endl;
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