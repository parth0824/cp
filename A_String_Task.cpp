#include <bits/stdc++.h>
using namespace std;
bool check(char x){
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||x == 'y' ||x == 'A' ||x == 'E' ||x == 'I' ||x == 'O' ||x == 'U' ||x == 'Y'){
        return true;
    }
    return false;
}
int main(){
    string a;cin>>a;
    for(int i=0;i<a.size();i++){
        if(check(a[i])){
            // INDIAN
        }
        else{
            if(a[i] >= 65 && a[i] <= 90)a[i] = a[i] + 32;
            cout<<"."<<a[i];
        }
    }
return 0;
}