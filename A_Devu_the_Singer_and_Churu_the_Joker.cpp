#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    int s = 0;
    int a = 1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s = s + x + 10;
        a+=2;
    }
    s -=10;
    a-=2;


























    
    if(s > m){
        cout<<-1;
        return 0;
    }
    cout<<(a+(m-s)/5)-1<<endl;
return 0;
}