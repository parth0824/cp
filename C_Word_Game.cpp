// if a word was written by one person — that person gets 3 points,
// if a word was written by two people — each of the two gets 1 point,
// if a word was written by all — nobody gets any points.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        unordered_set<string> a;
        unordered_set<string> b;
        unordered_set<string> c;
        int u=0,v=0,w=0;
        for(int i=0;i<n;i++){
            string x;cin>>x;
            a.insert(x);
        }
        for(int i=0;i<n;i++){
            string x;cin>>x;
            b.insert(x);
        }
        for(int i=0;i<n;i++){
            string x;cin>>x;
            c.insert(x);
        }
        // for a;
        for(auto i : a){
            auto x = b.find(i);
            auto y = c.find(i);
            if(x == b.end() && y == c.end()){
                u +=3;
            }
            else if((x == b.end() && y != c.end()) || (x != b.end() && y == c.end())){
                u += 1;
            }
        }
        // for b
        for(auto i : b){
            auto x = a.find(i);
            auto y = c.find(i);
            if(x == a.end() && y == c.end()){
                v +=3;
            }
            else if((x == a.end() && y != c.end()) || (x != a.end() && y == c.end())){
                v += 1;
            }
        }
        // for c
        for(auto i : c){
            auto x = b.find(i);
            auto y = a.find(i);
            if(x == b.end() && y == a.end()){
                w +=3;
            }
            else if((x == b.end() && y != a.end()) || (x != b.end() && y == a.end())){
                w += 1;
            }
        }
        cout<<u<<" "<<v<<" "<<w<<endl;
    }
}