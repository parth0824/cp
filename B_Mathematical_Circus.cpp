#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i == j)continue;
                if((i+k)*j % 4 != 0){
                    cout<<"NO\n";
                    // break;
                }
                else{
                    cout<<"YES\n";
                    cout<<i<<" "<<j<<endl;
                    // break;
                }
            }
        }
    }
return 0;
}