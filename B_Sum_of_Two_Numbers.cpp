/*
x+y=n
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
the sum of digits of x and the sum of digits of y differ by at most 1
*/
/*
// tle :(
#include <bits/stdc++.h>
using namespace std;
bool ispossible(int a, int b)
{
    int x = 0, y = 0;
    while (a)
    {
        x += (a % 10);
        a /= 10;
    }
    while (b)
    {
        y += (b % 10);
        b /= 10;
    }
    if (abs(x - y) <= 1)
        return 1;
    return 0;
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n/2; i++)
    {
        int f = i, s = n - i;
        if (ispossible(f, s))
        {
            cout << f << " " << s << endl;
            return;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    while (n--)
        solve();
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s = to_string(n);
    int i = 0;
    bool chk = 0; // sum equal
    int a = 0, b = 0;
    while (i < s.size())
    {
        int num = s[i] - 48; 
        if (num % 2 == 0)
        {
            a = (a * 10) + (num / 2);
            b = (b * 10) + (num / 2);
        }
        else
        {
            if (chk == 0)
            {
                a = (a * 10) + (num / 2) + 1;
                b = (b * 10) + (num / 2);
                chk != chk;
            }
            else
            {
                a = (a * 10) + (num / 2);
                b = (b * 10) + (num / 2) + 1;
                chk != chk;
            }
        }
        i++;
    }
    cout << a << " " << b << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
        solve();
    return 0;
}