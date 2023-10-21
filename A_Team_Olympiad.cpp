#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x == 1) a.push_back(i+1);
        else if(x == 2) b.push_back(i+1);
        else c.push_back(i+1);
    }
    int x = min(a.size(),min(c.size(),b.size()));cout<<x<<endl;
    for(int i=0;i<x;i++){
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }
return 0;
}