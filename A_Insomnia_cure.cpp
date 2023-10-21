#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int,int>
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

int main(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int t;cin>>t;
    vi v;
    for(int i=0;i<t;i++){
        v.push_back(i+1);
    }
    int i=0;
    int s = 0;
    while(i < v.size()){
        if(v[i] % a == 0 || v[i] % b == 0 || v[i] % c == 0 || v[i] % d == 0){
            s++;
        }
        i++;
    }
    cout<<s<<endl;
return 0;
}