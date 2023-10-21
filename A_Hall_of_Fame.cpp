#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vvb vector<vector<bool>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define vpii vector<pair<int, int>>
#define vc vector<char>
#define pb push_back
#define po pop_back
#define pii pair<int, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>
#define umii unordered_map<int, int>
#define umci unordered_map<char, int>
#define umsi unordered_map<string, int>

void testcase(){
    int n;cin>>n;
    string s;
    int m = s.size();
    int arr[m];
    for(int i=0;i<m;i++)arr[i] = 0;
    int c = 0;
    int d = 1;
    for(int i=0;i<s.size();i++){
        if(c > 1){
            cout<<-1<<endl;
            break;
        }
        if(s[i] == 'L'){
            size_t x = s.find("R",0,i);
            size_t y = s.find("L",i,s.size());
            if(x !=  string::npos || y !=  string::npos){
                d = i;
                char q = s[i];
                s[i] = s[i+1];
                s[i+1] = q;
                i--;
                c++;
            }
        }
        else if(s[i] == 'R'){
            size_t x = s.find("L",0,i);
            size_t y = s.find("R",i,s.size());
            if(x != string::npos || y !=  string::npos){
                d = i;
                char q = s[i];
                s[i] = s[i+1];
                s[i+1] = q;
                i--;
                c++;
            }
        }
    }
    cout<<d<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        testcase();
    }
return 0;
}