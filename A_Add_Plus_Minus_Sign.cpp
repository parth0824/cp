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
string ans = "";
int minn = INT_MAX;
void ismin(string help){
    char x = help[0];
    int sum = (int)x-48;
    
    for(int i=0;i<help.size();i++){
        if(help[i] == '+'){
            int y = (int)help[i-1]-48;
            sum += y;
        }
        else if(help[i] == '-'){
            int y = (int)help[i-1]-48;
            sum -= y;
        }
    }
    minn = min(minn,sum);
}
void findpair(string s,int i,string help){
    if(i == s.size()){
        help.pop_back();
        cout<<help<<endl;
        ismin(help);
        return ;
    }
    help += s[i];
    if(s[i+1] != 0){
        findpair(s,i+1,help+'+');
        findpair(s,i+1,help+'-');
    }
    else{
        help += '+';
        findpair(s,i+1,help);
    }




}
void callFun(){
    int n;cin>>n;
    string s;cin>>s;
    findpair(s,0,"");
    cout<<ans<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        callFun();
        cout<<minn<<endl;
        ans = "";
        minn = INT_MAX-1;
    }
return 0;
}