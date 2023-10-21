#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int a, b;
    a = b = -1;
    int ans = 1;
    int maxx = 1;
    while (i < n)
    {
        int u, v;
        cin >> u >> v;
        if (u == a && v == b)
            ans++,maxx = max(ans,maxx);
        else 
            ans = 1;
        a = u;
        b = v;
        i++;
    }
    cout << maxx << endl;
    return 0;
}