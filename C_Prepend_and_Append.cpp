#include <bits/stdc++.h>
using namespace std;
void call(string &s, string &ans)
{
    if ((s.size() == 0) || (s[0] == '1' && s[s.size() - 1] == '1') || (s[0] == '0' && s[s.size() - 1] == '0'))
    {
        ans = s;
        return;
    }
    s.pop_back();
    s.erase(s.begin());
    call(s, ans);
}
void testcase()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    call(s, ans);
    cout << ans.size() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        testcase();
    return 0;
}