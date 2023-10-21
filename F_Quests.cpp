#include <bits/stdc++.h>
using namespace std;

#define ll long long int
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
#define pb push_back

void testcase(){
    ll n,c,d;cin>>n>>c>>d;
    vi v;
    for(int i=0;i,n;i++){
        int x;cin>>x;
        v.pb(x);
    }
    ll sum = 0;
    int maxx = *max_element(v.begin(),v.end());
    if(maxx * d < c){
        cout<<"Impossible"<<endl;
    }
    else {
        
    }

}
void solve(){
    int t;cin>>t;
    while(t--){
        testcase();
    }
}
int main(){
    solve();
return 0;
}