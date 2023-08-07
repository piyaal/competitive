#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n+1];
        map<ll,ll> mp;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        sort(arr,arr+n);
        if(mp[arr[0]]==n)
            cout<<n*(n-1)<<endl;
        else  cout<<2*mp[arr[0]]*mp[arr[n-1]]<<endl;
        //a=*max_element(arr,arr+n);
        //b =*min_element(arr,arr+n);

        // c=0,d=0;
        /*for(i=0;i<n;i++)
        {
        if(arr[i]==a) c++; else if( arr[i]==b) d++;
        } cout<< c*d*2<<endl;*/
    }
}
