#include <bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
    int x = (a*b);
    int ans;
    for(int i=x;i>=1;i--){
        if(i % a == 0 && i % b == 0){
            ans = i;
        }
    }
    return ans;
}
int hcf(int a,int b){
    int x = a*b;
    int ans=1;
    for(int i=1;i<x;i++){
        if(i % a == 0 && i % b == 0) {
            ans = i*ans;
        }
    }
    return ans;
}
int main(){
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    cout<<hcf(12,33);
}