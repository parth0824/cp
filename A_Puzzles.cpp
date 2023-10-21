#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)cin>>arr[i];
    sort(arr,arr+m);
    int ans = INT_MAX;
    for(int i=0;i<=m-n;i++){
        int mi = arr[i];
        int ma = arr[i+n-1];
        if(ans > (ma-mi)){
            ans = ma - mi;
        }
    }
    cout<<ans;
return 0;
}