#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
// Vasilije is given three positive integers: n, k, and x, and he has to determine if he can choose k distinct integers between 1 and n, such that their sum is equal to x.
{
    int n, dist, sum;
    cin >> n >> dist >> sum;
    int maxx = 0,minn = (dist*(dist+1)) / 2;
    int x = n - dist;
    int summ = (x*(x+1)/2);
    int fullsum = (n*(n+1))/2;

    maxx = fullsum - summ;

     
    if(sum >= minn && maxx >= sum){
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
}
signed main()
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