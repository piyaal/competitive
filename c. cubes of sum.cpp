#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll> mp;
        string str="NO";
        for(ll i=1; i*i*i<=n; i++)
            mp[i*i*i]=1;

        for(ll i=1; i*i*i<=n; i++)
        {
            if(mp[n-i*i*i]==1)
            {
                str="YES";
                break;
            }
        }
        cout<<str<<endl;
        mp.clear();
    }
}
