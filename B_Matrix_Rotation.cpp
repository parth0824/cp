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
    int a,b,c,d;cin>>a>>b>>c>>d;
    if(a < b && a < c && d > a  && d > b && d > c){
        cout<<"YES\n";
    }
    else if(c < a && c < d && b > c && b > d && b > a){
        cout<<"YES\n";
    }
    else if(d < c && d < b &&  a > d && a > c && a > b){
        cout<<"YES\n";
    }
    else if(b < d && b < a && c > b && c > a && c > d){
        cout<<"YES\n";
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        testcase();
    }
return 0;
}