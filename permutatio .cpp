
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int M=1e9+7;
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {  string s;
        cin>>n;
        ll arr[n];
        map<ll,ll>mp;
        for(i=0;i<n; i++)
        {
            cin>>b;
            mp[b]++;
        }
        c=0;
        a=1;
        ll cc;
         for(i=1;i<=n; i++)
         {
            cc=a*mp[i];
            cc%=M;
            c=c+cc;
            a=cc;
            c=c%M;
         }
         cout<<c<<endl;


        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
