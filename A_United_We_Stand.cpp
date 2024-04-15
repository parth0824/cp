#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n, -1);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x;
    }
    vector<int> b, c;
    bool chk = 0;

    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(i == j)continue;
            if(v[j] % v[i] == 0 && v[j] != v[i]){

            }
            else{
                cnt++;
            }
        }
        if(cnt == n-1){


        }
    }


    

















    if (chk)
    {
        cout << b.size() << " " << c.size() << endl;
        for (auto i : b)
            cout << i << " ";
        cout << endl;
        for (auto i : c)
            cout << i << " ";
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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