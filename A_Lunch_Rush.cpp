
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    int ma=INT_MIN;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        if(b > m){
            a = a-(b-m);
        }
        ma = max(ma,a);
    }
    cout<<ma;
}
int main(){
    solve();
}
