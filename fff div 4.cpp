
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
const ll N=1e18+10;
void solve(){ ll n,a,b,c;
        cin>>n>>a>>b;
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        auto xx=[&](ll j)
        {
            ll cc=accumulate(v.begin(),v.begin()+ min(j,ll(n)),0LL);
            ll ps=(b/j)*cc+accumulate(v.begin(),v.begin() + min(ll(b%j),ll(n)),0LL);
                                      return ps>=a;
        };
               ll lw=0,hi=N;
        while(lw<hi)
        {
            ll md=(lw+hi+1)/2;
            if(xx(md))
            {
                lw=md;
            }
            else
            {
                hi=md-1;
            }
        }
         cout<<(lw==0?"Impossible" :(lw==N?"Infinity" : to_string(lw-1)))<<endl;
}
int main()
{

    ll n,t,i;;
    cin>>t;
    while(t--)
    {

        solve();} }
