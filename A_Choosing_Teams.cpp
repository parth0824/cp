#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x+m);
    }
    sort(v.begin(),v.end());
    int ans = 0;
    for(int i=0;i<v.size();i++){
        if((v[i+2] <= 5) && ((i+2) < n)){
            ans++;
            i+=2;
        }
        else{
            break;
        }
    }

    cout<<ans;


}
int main(){
    solve();
}