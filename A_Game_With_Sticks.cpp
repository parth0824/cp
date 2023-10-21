#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=0,n,m;cin>>n>>m;
    while(n > 0 && m > 0){
        n--;
        m--;
        a++;
    }
    if(a % 2 == 0)cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;
return 0;
}