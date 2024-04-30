#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int solve()
{
    int n, k;
    cin >> n >> k;
    map<int,int> m;
    int x;
    int maxx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
        maxx = max(maxx,m[x]);
    }
    if(maxx >= k)return k-1;
    return n;
    
/*
ans
2 - 1 1 4 4 4 - 3
1 - 7 - 10
1 - 1 2 2 3 4 5 100 - 2
3 - 1 1 1 1 1 1 1 1 1 1 - 4 
5 - 1 3 7 8 48 - 2
1 - 10 10 20 20 30 40 - 2
6 - 10 10 20 20 30 40 - 3
*/
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        cout<<solve()<<endl;
    return 0;
}