#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    if(n < m){
        cout<<-1;
        return 0;
    }
    int x = n/2;
    if(n%2 != 0)x++;
    while(x % m != 0){
        x++;
    }
    cout<<x<<endl;
}