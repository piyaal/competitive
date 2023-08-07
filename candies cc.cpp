#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,x;
    cin>>t;
    while(t--)
    {   ll n;
        cin>>n;
        ll arr[2*n];
        map<ll,ll>m;
        for(ll i=0; i<2*n; i++)
        {

            cin>>arr[i];
            m[arr[i]]++;
        } int f=0;
        for(auto i:m)
        {

            if(i.second>=3)
            {
              f=1;
            }
        }  if(f==0)cout<<"YES"<<endl; else cout<<"NO"<<endl;
    }

}
