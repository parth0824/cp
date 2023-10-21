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
    string a,b;cin>>a>>b;
    string s = "";
    int i=0;
    while(i < a.size()){
        if((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')) s += '1';
        else s += '0';
        i++;
    }
    cout<<s<<endl;
return 0;
}