#include <bits/stdc++.h>
using namespace std;
int main(){
    int e=0,o=0;
    int n;cin>>n;
    vector<int> v;int t,k;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x%2 == 0){t=i;e++;}
        else {k=i;o++;}
        v.push_back(x);
    }
    if(e < o)cout<<t+1;
    else cout<<k+1;


return 0;
}