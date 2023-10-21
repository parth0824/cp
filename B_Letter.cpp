#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string ns;
    getline(cin, ns);

    unordered_map<char, int> u1;
    unordered_map<char, int> u2;
    for (auto i : s)u1[i]++;
    for (auto i : ns)u2[i]++;
    for (auto i : ns)
    {
        if (i == ' ')
            continue;
        int x = u1[i];
        int y = u2[i];
        if (x < y)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}