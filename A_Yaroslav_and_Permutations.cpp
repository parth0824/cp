#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;cin>>n;
    unordered_map<int,int> u;
    for(int i=0;i<n;i++){
        cin>>x;
        u[x]++;
    }
    int a = n/2 + 1;
    if(n%2==0)a--;
    for(auto i : u){
        int b = i.second;
        if(b > a){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
return 0;
}