// You are given three positive numbers n, k, and x, and you have to determine if he can choose k distinct integers between 1 and n, such that their sum is equal to x

#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
    ll n, k, sum;
    cin >> n >> k >> sum;
    
    ll x = (n*(n+1));
    ll y = x/2;
    if(y >= sum){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return ; 
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}