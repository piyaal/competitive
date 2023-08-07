#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c,mx,kx;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n>>mx>>kx;
        for(i=0; i<mx; i++)
        {
            cin>>a;
            c=max(c,a);
        }
        if(c>(n+kx-1)/kx) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}

