
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,q,i,a,b,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        int arr[n+10],frward[n+10],bkward[n+10];
        frward[0]=bkward[n+1]=0;
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        for(i=1; i<=n; i++)
        {
            frward[i]=__gcd(frward[i-1],arr[i]);
        }
        for(i=n; i>=1; i--)
        {
            bkward[i]=__gcd(bkward[i+1],arr[i]);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int gc=0;
            cout<<__gcd(frward[l-1],bkward[r+1])<<endl;
        }
        //cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
