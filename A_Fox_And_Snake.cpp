#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<char> x;
    vector<char> y;
    for(int i=0;i<m;i++)x.push_back('#');
    y.push_back('#');
    for(int i=0;i<m-1;i++)y.push_back('.');
    int i=0;
    while(1){
        for(int j=0;j<m;j++){
            cout<<x[j];
        }i++;cout<<endl;
        if(i == n)break;
        reverse(y.begin(),y.end());
        for(int j=0;j<m;j++){
            cout<<y[j];
        }i++;cout<<endl;
    }
return 0;
}