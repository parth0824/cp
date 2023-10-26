#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    for (int i = 0; i < 2 * n + 1; i++)
    {
        bool c = 1;
        int num = 0;
        if (i < n)
        {
            int s = n - i;
            while (s--)
            {
                cout << "  ";
            }
        }
        else if (i > n)
        {
            int s = i - n;
            while (s--)
            {
                cout << "  ";
            }
        }
        for (int j = 0; j < 2 * n + 1; j++)
        {
            if ((i <= n && ((j <= n && (i + j) >= n) || (j > n && (j - i <= n)))) ||
                (i > n && ((j <= n && (i - j <= n)) || ((j > n) && (i + j <= 3 * n)))))
            {
                cout << num;
                if ((j - i < n) && (i + j < 3 * n))
                    cout << " ";
                if (j >= n)
                {
                    num--;
                }
                if (j < n)
                {
                    num++;
                }
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}