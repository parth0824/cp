#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(n,-1),u(m,-1);
    int x;
    for(int i=0;i<n;i++){
        cin>>x;v[i] = x;
    }
    
    for(int i=0;i<m;i++){
        cin>>x;u[i] = x;
    }
    sort(v.begin(),v.end());
    sort(u.begin(),u.end());
    int ans =0; 
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i]+u[j] <= k){
                ans++;
            }
            else break;
        }
    }
    cout<< ans<<endl;;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve(); 
    }
    return 0;
}