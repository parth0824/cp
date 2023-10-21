#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string a,b;cin>>a>>b;
        bool x =0;
        int i=0;
        while(i < a.size()){
            if(a[i] == b[i] || (a[i] == 'G' && b[i] == 'B') || a[i] == 'B' && b[i] == 'G'){
                
            }
            else{
                cout<<"NO"<<endl;
                x = 1;
                break;
            }
            i++;
        }
        if(x != 1){
            cout<<"YES"<<endl;
        }
    }
return 0;
}
