#include <bits/stdc++.h>
const int N=1e6+10;
const int M=1e9+7;
#define ll long long int
using namespace std;
int main()
{
    ll n,m,k,t,i,a,b,c;t=1;
    //cin>>t;
    while(t--) {
            cin>>n>>m;
    ll arr[n];
    for(i=0; i<n; ++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    c=0;
    for(i=0; i<m; ++i){
        if(arr[i]<=0)
        c+=arr[i];
    }
    cout<<abs(c)<<endl;
} }
