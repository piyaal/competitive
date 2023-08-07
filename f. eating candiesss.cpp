#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        int arr[n+1];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        ll sum=0,lo=0,hi=n-1;
        ll ls=0,rs= 0;
        while (lo<=hi)
        {
            if (rs>ls)
            {
                ls+=arr[lo];
                lo++;
            }
            else
            {
                rs+=arr[hi];
                hi--;
            }

            if (rs==ls)
            {
                c=(lo+(n-1-hi));
            }
        }
        c?cout<<c:cout<<0;
        cout<<endl;
    }
}
