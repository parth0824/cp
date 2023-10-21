#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h, t;
    h = t = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 100)
            h++;
        else
            t++;
    }
    if (h == 0)
    {
        if (t % 2 == 0)
        {
            cout << "YES";
            return 0;
        }
        cout << "NO";
        return 0;
    }
    if (h % 2 == 0)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}