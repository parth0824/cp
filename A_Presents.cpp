#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int brr[n];
    for(int i=0;i<n;i++){cin>>brr[i];};
    int arr[n] ={0};
    for(int i=0;i<n;i++){
        arr[brr[i]-1] = i+1;
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}