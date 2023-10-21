#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d,w,x,y,z;cin>>a>>b>>c>>d;
    if(a == c || b == d){
        if(a == c)                        cout<<d-b+a<<" "<<b<<" "<<d-b+a<<" "<<d<<endl;
        else                              cout<<c<<" "<<c-a+b<<" "<<a<<" "<<c-a+b<<endl;
    }
    else if((b-a == d-c) || (a+b == c+d)) cout<<a<<" "<<d<<" "<<c<<" "<<b<<endl;
    else                                   cout<<-1<<endl;
return ;
}
int main(){
    solve();
return 0;    
}