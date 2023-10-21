#include <bits/stdc++.h>
using namespace std;
int main(){
    long long  t;cin>>t;
    while(t--){
        long long  a,b;cin>>a>>b;
        if((a+b) % 2 == 0)cout<<"Tonya"<<endl;
        else if((a+b) % 2 != 0)cout<<"Burenka"<<endl;
    }
    return 0;
}