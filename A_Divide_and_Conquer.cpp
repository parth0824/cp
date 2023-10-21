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

void testcase(){
    int n;cin>>n;
    vector<int> v;
    int sum =0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        sum += x;
        v.push_back(x);
    }
    if(sum % 2 == 0){
        cout<<0<<endl;
        return ;
    }
    int ans = INT_MAX;
    int x = 0;
    for(int i=0;i<v.size();i++){
        int x = v[i];
        int c = 0;
        while((x%2) == (v[i]%2)){
            c++;
            x /= 2;
        }
        ans = min(ans,c);
    }
    cout<<ans<<endl;   
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