#include <bits/stdc++.h>
using namespace std;
void testcase()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v1, v2;
    unordered_map<char, int> u;
    int add = 0;
    for (auto i : s)
    {
        u[i] = 1;
        if (u.size() > add)
        {
            add++;
        }
        v1.push_back(add);
    }
    reverse(s.begin(), s.end());
    u.clear();
    add = 0;
    for (auto i : s)
    {
        u[i] = 1;
        if (u.size() > add)
        {
            add++;
        }
        v2.push_back(add);
    }
    reverse(v2.begin(), v2.end());
    v1.pop_back();
    v2.erase(v2.begin());
    int maxx = 0;
    int i = 0;
    while (i < v2.size())
    {

        maxx = max(v1[i] + v2[i], maxx);

        i++;
    }
    cout << maxx << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        testcase();
    return 0;
}