#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;cin>>a;
    string b = "hello";
    int i,j;i=j=0;
    while(1){
        if(j >= 5){
            cout<<"YES";
            return 0;
        }
        if(i >= a.size()){
            cout<<"NO";
            return 0;
        }
        if(a[i] == b[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    cout<<"FUCK OFF"<<endl;
return 0;
}
