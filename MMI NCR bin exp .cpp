#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M=1e9+7;
const int N=1e5+10;
int fact[N];
int binexp(ll a,ll b,ll m)
{
    ll ans=1;
    while(b>0)  //3^13; binary of 13 =1101
    {
        if(b&1)
        {
            //ans=ans*a; //while binary bit 1 then we multyply the value with ans; for last 1>3,0>3,1>3^5,1>3^13;
            //for modulo
            ans= (ans*1LL*a)%m;

        }
        // a=a*a; //increasing the value of a  3*3; then 3^2*3^2,then 3^4 * 3^4;
        //for modulo
        a=(a*1LL*a)%M;
        b>>=1; //110,then 11,then 1

    }
    return ans;
}
int main()
{
    fact[0]=1;
    for(int i=1; i<N; i++)
    {
        fact[i]=(fact[i-1]*1LL*i )%M;

    }
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int ans=fact[n];
        int den=(fact[n-k]*1LL*fact[k])%M;
        ans=(ans*1LL*binexp(den,M-2,M))%M;
        cout<<ans<<endl;
    }
}
