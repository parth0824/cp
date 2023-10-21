#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;cin>>n>>m>>a>>b;
    int s1=0,s2=0;
    if(a*m > b){
        while(s1 < n){
            s1 += m;
            s2 += b;
        }
        int x = s1;
        int y = s2;
        s1 -= m;
        s2 -= b;
        while(s1 < n){
            s1 += 1;
            s2 += a;
        }
        cout<<min(y,s2)<<endl;

    }
    else{
        cout<<n*a<<endl;
    }
}