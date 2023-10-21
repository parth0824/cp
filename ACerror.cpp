#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin >> s;
    char x = s[0];
    ll n = 0;
    while (n < s.size())
    {
        if (s[n] > '4')
        {
            s[n] = '9' - s[n] + '0';
        }
        n++;
    }
    if(s[0] == '0')s[0] = x;
    cout << s << endl;
    return 0;
}