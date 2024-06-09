#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    // initial 5X3
    int x,y;cin>>x>>y;// 1x1 2X2 
    int ay = (y / 2) + (y %  2);
    int ta = (ay * 15) - (y*4);

    if(ta < x){
        x -= ta;
        int s = x / 15; 
        if(x % 15 != 0)s++;
        cout<<ay + s<<"\n";
    }
    else{
        cout<<ay<<"\n";
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