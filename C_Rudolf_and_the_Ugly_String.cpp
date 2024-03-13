#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    if(n <= 2){
        cout<<0<<endl;
        return;
    }
    int ans = 0;
    int i =0,j=1,k=2;
    while(i < n  ){
        if((s[i] == 'm' && s[j] == 'a' && s[k] == 'p') || (s[i] == 'p' && s[j] == 'i' && s[k] == 'e')){
            ans++;s[k] = 't';
        } 
        i++;j++;k++;
    }
    cout<<ans<<endl;




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