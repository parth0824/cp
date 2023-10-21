

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int x = 0;
    while(x < v.size()){
        if(n % v[x] == 0){
            cout<<"YES";
            return 0;
        }
        x++;
    }
    cout<<"NO";
return 0;
}









