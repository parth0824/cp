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

int main(){
    int n;cin>>n;
    vi v;int x;
    int minn = INT_MAX;
    int maxx = INT_MIN;
    int imin,imax;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x < minn){
            minn = x;
            imin = i;
        }
        if(x > maxx){
            maxx = x;
            imax = i;
        }
        v.pb(x);
    }
    int a = abs(0 - imax);
    int b = abs(0 - imin);
    int c = abs(n-1 - imin);
    int d = abs(n-1 - imax);
    int ans = max(a,max(b,max(c,d)));
    cout<<ans<<endl;
    


    

return 0;
}