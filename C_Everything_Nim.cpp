#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;cin>>n;
    multiset<int> s;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
    }
    

    bool q = 0;

    
    if(q){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
    }
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