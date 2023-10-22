#include <bits/stdc++.h>
using namespace std;
#define long long int ll
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_water = k * l; // 20
    int total_silcelime = c * d;
    int total_salt = p;
    int min_water = nl;
    int min_lemon = 1;
    int min_salt = np;
    int p_water = total_water / min_water;     // (4*5) / 3 -> 6.666666
    int p_lemon = total_silcelime / min_lemon; // (10*8)/1 -> 80
    int p_salt = total_salt / min_salt;        // 100/1 -> 100

    cout << min(p_water, min(p_lemon, p_salt)) / n;
}