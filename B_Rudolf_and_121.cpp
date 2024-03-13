#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    bool chk = 1;
    int n;cin>>n;
    vector<int> v(n,-1);int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v[i] = x;
    }
    if(n < 3){
        cout<<"NO"<<endl;
        return ;
    }

    int i = 1;
    while(i < v.size()-1){
        int a = v[i-1],b=v[i],c=v[i+1];

        if((b > a && b > c) || (a == b && b == c) || (a > b+1)){
            chk = 0;
            break;
        }
        


        i++;
    }


    if(chk){
        cout<<"YES"<<endl;
    }
    else 
        cout<<"NO"<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}