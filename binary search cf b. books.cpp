

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e5+10;
ll n;
ll t;
ll books [N];
ll c_sum[N],index[N];
bool check(int x)
{
    for(int i=x; i<=n; i++)
    {
        if(c_sum[i]-c_sum[i-x]<=t)return true;
    }
    return false;
}
int main()
{

    ll i,a,b,c,d;
    cin>>n>>t;
    for(i=1; i<=n; i++)
    {
        cin>>books[i];
        c_sum[i]=c_sum[i-1]+books[i];
    }
    //sort(books+1,books+n+1);
    c=0;
    map<ll,ll>mp;
    for(i=1; i<=n; i++)
    {
        // c+=books[i];c_sum[i]=c;
        c_sum[i]=c_sum[i-1]+books[i];
        //index[c_sum[i]]=i;
        // mp[i]=c;
    }
    // for(i=1;i<=n;i++)
    // {cout<<index[c_sum[i]]<<" "<<c_sum[i]<<endl;}
    ll lo=1,hi=n;
    ll mid;
    c=0;
    d=0;
    while(lo<=hi)
    {
        mid=(hi+lo)/2;
        if(check(mid))
        {
            c=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<c<<endl;
}
