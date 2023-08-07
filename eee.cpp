#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int N=1e6+10;
void solve()
{
    auto cnt= [&](vector<int> &v )-> ll
    {
        int n= (int)v.size();
        ll an=0,cn2=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                an+=cn2;
            }
            else
            {
                cn2++;
            }
        }
        return an;
    };
    int n;
    cin>>n;
    vector<int> v(n);
    int lft=-1,rgh=-1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]==0 && lft==-1)
        {
            lft=i;
        }
        else if( v[i]==1)
        {
            rgh=i;
        }
    }
     ll ans= cnt(v);
    if(lft!=-1){
        auto a=v;
        a[lft]=1;
        ans=max(ans,cnt(a));
    } if(rgh!=-1){
    auto a=v;
    a[rgh]=0;
    ans= max(ans,cnt(a));
    }
   cout<<ans<<endl;
}

int main()
{

    ll n,t,i,a,b,c=0;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

