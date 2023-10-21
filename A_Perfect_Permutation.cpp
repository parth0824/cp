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
//  ppi=i and pi≠i.
    int n;cin>>n;
    if(n % 2 == 1){
        cout<<-1<<endl;
        return 0;
    }
    vi v;
    for(int i=0;i<n;i++){
        v.push_back(i+1);
    }
    int i=0;
    while(i < n-1){
        swap(v[i],v[i+1]);
        i += 2;
    }
    for(auto i : v)cout<<i<<" ";
return 0;
}