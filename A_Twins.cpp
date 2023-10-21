#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> a;
    int n, ans = 0, y=0, sum = 0;cin>>n;
    for(int i=0;i<n;i++){
        int b;cin>>b;
        a.push_back(b);
        sum = sum + a[i];
    }
    sort(a.begin(),a.end());int x = (sum/2) + 1;
    for(int i=a.size()-1;i>=0;i--){
        if(x>y){
            y = y + a[i];
            ans++;
        }else break;
    }
    cout<<ans<<endl;
return 0;
}