#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    string s;
    char c = 'a';
    for(int i=0;i<m;i++){
        s += c;
        c++;
    }
    for(int i=0;i<n;i++){
        cout<<s;
    }
    cout<<endl;
}
int main (){
    int n;cin>>n;
    while(n--) solve();
}