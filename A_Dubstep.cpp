#include <bits/stdc++.h>
using namespace std;
int main(){
    string ans="",a;cin>>a;
    bool x = 0;
    for(int i=0;i<a.size();i++){
        if(a[i] =='W' && a[i+1] =='U'&& a[i+2] == 'B'){
            i += 2;
            x = 1;
        }
        else{
            if(x == 1){
                ans += " ";
                x = 0;
            }
            ans += a[i];
        }
    }
    cout<<ans<<endl;
return 0;
}