#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{
    ll n,m,k,t,i,a,b,c,mx,mn;
    cin>>t;
    while(t--)
    {
        cin >> n;
        ll arr[n+1];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        c=0;ll mx=0; ll mn=0;
        for(i=0; i<n; i++)
        {
            c+=arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            mn+= arr[i];
            c-= arr[i];
            mx= max(mx, __gcd(mn,c));
        }
        cout << mx<<endl;
}
}

