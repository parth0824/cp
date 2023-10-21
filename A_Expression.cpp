#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;cin>>a>>b>>c;
    int d = a+b+c;
    int e = a+b*c;
    int f = a*b+c;
    int g = a*b*c;
    int h = (a+b)*c;
    int i = a+(b*c);
    int j = (a*b)+c;
    int k = a*(b+c);

    int m = max(d,max(e,max(f,max(g,max(h,max(i,max(j,k)))))));
    cout<<m<<endl;
return 0;
}