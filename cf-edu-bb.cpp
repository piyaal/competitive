
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,cc=0;
    cin>>t;
    while(t--)
    {
        cc=0;
        cin>>n;
        vector<ll> arr(n+1);
        map<ll,ll>mp;
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        sort(arr.begin()+2,arr.end());
        cc=arr[1];
        for(i=2; i<=n; ++i)
        {
            if(cc<arr[i])
            {
                cc+=(arr[i]-cc+1)/2;
            }
        }
        cout<<cc<<endl;
    }
}
