#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define vvb vector<vector<bool>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define umii unordered_map<int, int>
#define umci unordered_map<char, int>
#define umsi unordered_map<string, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>


void solve(){
    int n;cin>>n; 
    ll ans = 0, x;
    vi v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.pb(x);

    } 
    int sub = 0;
    for(int i=n-1;i>=0;i--){
        int maxx = *max_element(v.begin(),v.end()-sub++);
        if(v[i] == maxx){

        }
        else{
            ans += maxx;
            cout<<ans<<endl;
            return ;
        }
    }
    cout<<ans<<endl; 
}
int main(){
    int t;cin>>t;
    while(t--)solve();
return 0;
}