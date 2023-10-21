#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/124/problem/A

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int ans = n - a;
    
    int x = ans - b;
    if(x <= 0){
        cout<<ans;
        return 0;
    }

    int fans = ans - b - 1;
    if(fans > 0){
        ans -= fans;
    }


    





    cout << ans << endl;

    return 0;
}