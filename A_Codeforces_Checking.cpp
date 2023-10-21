#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s = "codeforces";
    while(n--){
        char c;cin>>c;
        auto i = s.find(c);
        if(i != -1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
return 0;
}