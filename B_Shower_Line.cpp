// tc = O(n!)
#include <bits/stdc++.h>
using namespace std;

void findPermutation(vector<int> &v, vector<int> help, vector<vector<int>> &ans)
{
    if ((int)v.size() == 0)
    {
        ans.push_back(help);
        return;
    }
    for (int i = 0; i < v.size(); i++)
    {
        vector<int> temp = v;
        int x = v[i];
        v.erase(v.begin() + i);
        help.push_back(x);
        findPermutation(v, help, ans);
        help.pop_back();
        v = temp;
    }
}
void find(vector<vector<int>> &m, vector<int> &v, int &sum)
{
    if (v.size() == 0)
    {
        return;
    }
    int chk = 1;
    if (v.size() % 2 == 0)
    {
        chk = 0;
    }
    for (int i = 0; i < v.size() - chk; i++)
    {
        sum += (m[v[i]][v[i + 1]] + m[v[i + 1]][v[i]]);
        i++;
    }
    v.erase(v.begin());
    find(m, v, sum);
}
int main()
{
    vector<int> v = {0, 1, 2, 3, 4};
    vector<vector<int>> ans;
    findPermutation(v, {}, ans);
    vector<vector<int>> m;
    for (int i = 0; i < 5; i++)
    {
        vector<int> help;
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            help.push_back(x);
        }
        m.push_back(help);
    }
    int anss = 0;
    for (auto i : ans)
    {
        int sum = 0;
        find(m, i, sum);
        anss = max(anss, sum);
    }
    cout << anss << endl;
    return 0;
}