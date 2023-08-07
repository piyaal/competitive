
#include <bits/stdc++.h>
using namespace std;
#define ll              long long int
#define pb             push_back
#define fr(n)          for(ll i=1;i<=n;i++)
#define f               first
#define s              second
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define make make_pair
int main()
{
   ll t;
   t=1;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    fr(n)
    {
        ll x;
        cin>>x;
        v.pb(make(x,i));
    }
    SORT(v);
    if(v[0].f==v[1].f)
    {
        cout<<v[n-1].s<<endl;
    }
    else
    {
        cout<<v[0].s<<endl;
    } }
   return 0;
}
