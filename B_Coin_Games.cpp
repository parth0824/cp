/*
In each operation, the player chooses a facing-up coin, removes the coin, and flips the two coins that are adjacent to it. If (before the operation) there are only two coins left, then one will be removed and the other won't be flipped (as it would be flipped twice). If (before the operation) there is only one coin left, no coins will be flipped. If (before the operation) there are no facing-up coins, the player loses.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool chk = 0;
    vector<int> v;
    int x = 0;
    for (auto i : s)
    {
        if (i == 'U')
            x++;
    }

    if(x % 2 == 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }


    

 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}