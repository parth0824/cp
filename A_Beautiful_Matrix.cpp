#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int x;
    int a = -1, b = -1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            if (x == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    cout << abs(2 - a) + abs(2 - b);
    return 0;
}