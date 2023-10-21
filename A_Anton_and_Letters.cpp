#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    unordered_set<char> s;
    for (int i = 0; i < 1000; i++)
    {
        char x;
        cin >> x;
        s.insert(x);
    }
    for (auto i : s)
    
    
        if (s.size() <= 2)
        {
            cout << 0;
            return 0;
        }
    if (s.size() == 3)
    {
        cout << 1 << endl;
        return 0;
    }
    cout << s.size() - 3;
    return 0;
}