#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n];
        map<ll,ll>mp;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);
        ll c=0;
        for(i=0; i<n; i++)
        {
            mp[arr[i]]++;
        }
    if(mp[0]==0)c=2;
    else c=1;
    for(i=0; i<n-1; i++)
    {
        if((arr[i]<i+1) && (arr[i+1]>=i+2))c++;
    }
    cout<<c<<endl;
}
}
