#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    unordered_map<int,int> u;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x == 5 || x == 7){
            cout<<"-1";
            return 0;
        }
        u[x]++;
    }
    if(u.size() < 3){
        cout<<"-1";
        return 0;
    }
    


return 0;
}