#include<bits/stdc++.h>
using namespace std;
void testcase()
{
    long long int n;
    cin >> n;
    vector<long long int> v;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        x += sum;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int k = 0;
    while(k < v.size()){
        if(v[k] <= 0){
            break;
        }
        k++;
    }
    int i =0;
    int g = k;
    while(i < g){
        int m = max(abs(v[i]),v[k]);
        if(m != v[k]){
            v[i] *= (-1);
            v[k] *= -1;
            swap(v[k],v[i]);
        }
        i++;
        k++;
    }
    int ssum = 0;
    for(auto i : v)ssum+=i;
    cout<<ssum<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        testcase();
    return 0;
}