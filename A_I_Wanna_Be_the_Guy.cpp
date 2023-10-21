#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n] = {0};
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        arr[x-1] = 1;
    }
    int o;cin>>o;
    for(int i=0;i<o;i++){
        int x;cin>>x;
        arr[x-1] = 1;
    }
    for(int i=0;i<n;i++){
        if(arr[i] != 1){
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
return 0;
}