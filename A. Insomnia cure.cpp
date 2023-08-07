#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    ll arr[d]= {0};
    ll ans=0;
    ll i=1;

    for(ll i=1; i<=d; i++)
    {
        if((i%k)!=0 && (i%l)!=0 && (i%m)!=0 && (i%n)!=0)
        {
            ans++;
        }
    }
    cout<<d-ans<<endl;
}
