#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    char a;
    unordered_set<char> u;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char x;cin>>x;
            if(i == 0 && j == 0){
                a = x;
            }
            else if(i == j || i+j == n-1){
                if(x != a){
                    cout<<"NO";
                    return 0;
                }
            }
            else{
                u.insert(x);
                if(x == a && i != j){
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    if(u.size() != 1){
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
return 0;
}