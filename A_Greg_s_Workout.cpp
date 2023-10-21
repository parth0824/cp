#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int c=0,bi=0,ba=0;
    for(int i=0;i<n;i++){
        if((i % 3) == 0){
            c=c+v[i];
        }
        else if((i % 3) == 1){
            bi=bi+v[i];
        }
        else{
            ba=ba+v[i];
        }
    }
    if(c > ba && c > bi){
        cout<<"chest"<<endl;
    }
    if(ba > c && ba > bi){
        cout<<"back"<<endl;
    }
    if(bi > c && bi > ba){
        cout<<"biceps"<<endl;
    }
return 0;
}