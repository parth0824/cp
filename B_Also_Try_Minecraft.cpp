#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;cin>>n>>m;
    vector<int> a;
    for(int i=0;i<n;i++){
        long long x;cin>>x;
        a.push_back(x);
    }
    vector<int> x = {0};
    vector<int> y;
    int sum = 0;
    for(int i=1;i<=a.size()-1;i++){
        if(a[i] < a[i-1]){
            sum = sum + a[i-1] - a[i];
            x.push_back(sum);
        }else x.push_back(0);
    }
    sum = 0;
    for(int i=a.size()-1;i>0;i--){
        if(a[i] > a[i-1]){
            sum = sum + a[i] - a[i-1];
            y.push_back(sum);
        }else y.push_back(0);
    }
    for(auto i : x)cout<<i<<" ";cout<<endl;
    for(auto i : y)cout<<i<<" ";cout<<endl;
    // while(m--){
    //     int x,y; cin>>x>>y;
    //     if(x < y){
    //         x--;
    //         y--;
            
    //     }

    // }

}