#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vvb vector<vector<bool>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define umii unordered_map<int,int>
#define umci unordered_map<char,int>
#define umsi unordered_map<string,int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>
#define pb push_back

void solve(){
    int a;cin>>a;a++;
    while(a){
        int b = a % 10;
        int c = a % 100 / 10;
        int d = a % 1000 / 100;
        int e = a % 10000 / 1000;
        usi f;
        f.insert(b);
        f.insert(c);
        f.insert(d);
        f.insert(e);
        if(f.size() == 4){
            cout<<a<<endl;
            break;
        }
        a++;
    }
}
int main(){
    solve();
return 0;
}