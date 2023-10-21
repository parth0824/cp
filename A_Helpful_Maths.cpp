#include <bits/stdc++.h>
using namespace std;
int main (){
    string a,b="";cin>>a;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(a[i] != '+'){
            b = b + a[i] + "+";
        }
    }
    if(b.size() > 1)b.pop_back();
    cout<<b<<endl;
}