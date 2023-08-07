
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
        string s;
        cin>>n;
           ll arr[n];
        map<ll,ll> mp;
        for(i=0; i<n; i++)
        {
            cin>>a;
            mp[a]++;
        }
        m=0;
        for(auto it:mp)
        {
            m=max(m,it.second);
        }
        cout<<n-m<<endl;
        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
