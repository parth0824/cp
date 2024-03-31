#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;cin>>n;
    if(n % 2 == 1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    char x = 'A';
    while(n > 0){
        cout<<x<<x;
        if(x == 'Z'){
            x = 'A';
        }
        x++;
        n -= 2;
    }cout<<endl;
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}