#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;cin>>n;
    int i = 0;
    while(i < n){
        int a,b,c;cin>>a>>b>>c;
        int x,y,z;x=y=z=0;
        x = a + b;
        y = a + c;
        z = c + b;
        if(x == c || y == b || z == a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO\n";
        }
        i++;
    }
return 0;
}