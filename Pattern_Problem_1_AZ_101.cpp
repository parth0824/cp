#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void prints(int n)
{
    for (int i = 0; i < n; i++)
        cout << "*";
    cout << '\n';
}
void printStar(int n)
{
    cout << "*";
    for (int i = 0; i < n; i++)
        cout << "..*";
    cout << '\n';
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int a = m * 3 + 1;
    prints(a);
    for (int i = 0; i < n; i++)
    {
        printStar(m);
        printStar(m);
        prints(a);
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