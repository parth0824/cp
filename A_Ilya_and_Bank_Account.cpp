#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a;cin>>a;
    if(a > 0){
        cout<<a<<endl;
        return 0;
    }
    else if(a == 0){
        cout<<0<<endl;
        return 0;
    }
    else{
        int y = a%10;
        long long int z = a/10;
        cout<<max(a / 100 * 10+y,z);
        return 0;
    }
return  0;
}