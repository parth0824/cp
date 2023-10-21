#include <bits/stdc++.h>
using namespace std;
int mans = INT_MAX;
void chk(int a,int b,int c,int d,int ans){
    if(a > c && b > d || (mans != INT_MAX))return ;
    if(a == c && b == d){
        mans = min(mans,ans);
        return ;
    }
    chk(a-1,b,c,d,ans+1);
    chk(a+1,b+1,c,d,ans+1);
}
void testcase(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    mans = INT_MAX;
    if(a == c && b == d){
        cout<<0<<endl;
        return ;
    }
    int ans = 0;
    chk(a,b,c,d,ans);
    if(mans == INT_MAX)cout<<-1<<endl;
    else cout<<mans<<endl;
}
int main(){
    int t;cin>>t;
    while(t--)testcase();
return 0;
}