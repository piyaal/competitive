#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin>>n;
    ll arr[n+1];
    for(ll i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    ll w;
        if(n%2!=0)
           w=n/2+1;
        else
           w=n/2;


        ll v;
        ll u;
        ll t=1;

        ll z=0;
        for(ll i=2;i<=w;i++)
        {
            if(arr[i]==arr[i-1]+1)
               t++;
            else
            {
                if(t>z&&arr[i-1]>=i-1)
                 {
                     z=t;
                     v=i-1;
                     u=i-t;
                     t=1;

                 }
            }


        }
        if(t>z&&arr[w]>=w)
          {
              z=t;
              v=w;
              u=w-t+1;

          }
        ll x=arr[u]-u+1;
        ll p=x;
        ll a=0;
        for(ll i=1;i<=w;i++)
        {
            if(arr[i]==p)
              a++;

            p++;
        }
        ll q;
        if(n%2!=0)
           q=n/2+1;
        else
           q=n/2;
        p=x;
        for(ll i=n;i>q;i--)
        {
            if(arr[i]==p)
               a++;

            p++;
        }

        ll sum=n-a;


        z=0;
        t=1;

        for(ll i=n-1;i>=w;i--)
        {
            if(arr[i]==arr[i+1]+1)
               t++;
            else
            {
                if(t>z&&arr[i+1]>=n-i)
                 {
                     z=t;
                     v=i+1;
                     u=i+t;
                     t=1;

                 }
            }


        }
        if(t>z&&arr[w]>=n-w)
        {
            z=t;
            v=w;
            u=w+t-1;
        }
        t=n-u;
        x=arr[u]-t;
        p=x;
        ll b=0;
        for(ll i=1;i<=w;i++)
        {
            if(arr[i]==p)
              b++;

            p++;
        }
        p=x;
        for(ll i=n;i>q;i--)
        {
            if(arr[i]==p)
               b++;

            p++;
        }


        sum=min(sum, n-b);
        cout<<sum;
        return 0;
}
