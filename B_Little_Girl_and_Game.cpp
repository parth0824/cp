#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    vector<int> v(26,0);
    for(int i=0;i<s.size();i++){
        int x = s[i] - 'a';
        v[x]++;
    }
    int o=0;
    for(auto i : v){
        if(i % 2 != 0)o++;
    }
    if(o == 0)cout<<"First";
    else if(o % 2 != 0)cout<<"First";
    else cout<<"Second"; 
return 0;
}