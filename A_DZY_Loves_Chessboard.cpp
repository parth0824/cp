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

char findChessboard(vvc &v,vvc &ans,int i,int j){
    if(i == v.size() && j == v[0].size()){
        return '0';
    }
    if(i < 0 || i == v.size() || j < 0 || j == v[0].size() || v[i][j] == '-'){
        return '1';
    }



    char a1 = findChessboard(v,ans,i,j-1);
    char a2 = findChessboard(v,ans,i-1,j);

    if((a1 != 'B' && a2 != 'B')){
        ans[i][j] = 'W';
    }
    else if(a1 != 'W' && a2 != 'W'){
        ans[i][j] = 'B';
    }

    


    char a3 = findChessboard(v,ans,i,j+1);
    char a4 = findChessboard(v,ans,i+1,j);











}
void solve(){
    int n,m;
    cin>>n>>m;
    vvc v;
    vvc ans;
    for(int i=0;i<n;i++){
        vc h;
        vc g;
        for(int j=0;j<m;j++){
            char x;cin>>x;
            h.pb(x);
            g.pb('-');

        }
        ans.pb(g);
        v.pb(h);
    }
    findChessboard(v,ans,0,0);
}
int main(){
    solve();
return 0;
}