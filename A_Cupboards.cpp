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

int main(){
    int n;cin>>n;
    vpii p; 
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        p.push_back({x,y});
    }
    int fo=0,fc=0,so=0,sc=0;
    for(auto i : p){
        if(i.first == 1)fo++;
        if(i.first == 0)fc++;
        if(i.second == 1)so++;
        if(i.second == 0)sc++;        
    }
    int sd = max(so,sc);
    int fd = max(fo,fc);
    // cout<<fd<<" "<<sd<<endl;
    cout<< n - fd + n - sd<<endl;
return 0;
}