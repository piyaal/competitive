#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,k,t,i,a,b,c,d;
    cin>>t;
    while(t--)
    {
        ll ans=0,c=0,d=0,f=0;
        cin>>n;
        ll arr[n+1],brr[n+1],crr[n+1];
        for(ll i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        ll e=0;
        ll m=0;
        for(ll i=1; i<=n; i++)
        {
            if(arr[i]%2==0)
            {
                brr[c++]=i;
                d++;
            }
            else if(arr[i]%2==1)
            {
                crr[e++]=i;
                f++;
            }
            if(d+f>=3 && d>=2 && f>=1)
            {
                cout<<"YES"<<endl;
                cout<<brr[0]<<" "<<brr[1]<<" "<<crr[0]<<" "<<endl;
                m=1;
                break;
            }
            if(f==3)
            {
                cout<<"YES"<<endl;
                cout<<crr[0]<<" "<<crr[1]<<" "<<crr[2]<<" "<<endl;
                m=1;
                break;
            }

        }
        if(m==0)
            cout<<"NO"<<endl;
//cout<<ans<<endl;

    }

}
