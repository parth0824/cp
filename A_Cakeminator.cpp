#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    char arr[n][m];
    int ans = 0;
    for(int i=0;i<n;i++){
        bool x = 0;
        for(int j=0;j<m;j++){
            char y;cin>>y;
            arr[i][j] = y;
            if(y == 'S')x=1;            
        }
        if(x == 0){
            ans = ans + m;
        }
    }
    int f=0;
    for(int i=0;i<m;i++){
        bool x = 0;
        for(int j=0;j<n;j++){
            if(arr[j][i] == 'S'){
                x = 1;f++;
                break;
            }
        }
        if(x == 0)
        ans = ans + n ;
    }
    if(f == 0){
        cout<<m*n;return 0;
    }else if(f == m*n){cout<<0;return 0;}
    cout<<ans-f;

}