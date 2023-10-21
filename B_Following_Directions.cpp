#include <bits/stdc++.h>
using namespace std;
void testcase()
{
    int n;
    cin >> n;
    string d;
    cin >> d;
    int i = 0;
    int x = 0, y = 0;
    while (i < n)
    {
        if (d[i] == 'U')
        {
            y++;
        }
        else if (d[i] == 'R')
        {
            x++;
        }
        else if (d[i] == 'D')
        {
            y--;
        }
        else
        {
            x--;
        }

        i++;
        if (x == 1 && y == 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        testcase();
    return 0;
}