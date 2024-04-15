#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    int e = 0, o = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
            e++;
        else
            o++;
    }
    if(o % 2 == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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