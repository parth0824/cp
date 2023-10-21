#include <bits/stdc++.h>
using namespace std;
int main(){
    ull n,m;cin>>n>>m;

    if((n & 1) == 0){
        if(m-1 < n/2){
            m--;
            cout<<2*m+1;
            return 0;
        }
        else{
            m -= n/2;
            cout<<m*2;
            return 0;
        }
    }
    else{
        if(m -1 <= n/2){
            m--;
            cout<<2*m+1;
            return 0;
        }
        else{
            m -=n/2;
            m--;
            cout<<m*2;
            return 0; 
        }
    }
return 0;
}