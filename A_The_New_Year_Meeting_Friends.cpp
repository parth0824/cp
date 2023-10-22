#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(abs(a - b) + abs(b - c), min(abs(b - c) + abs(a - c), abs(a - b) + abs(a - c)));
}