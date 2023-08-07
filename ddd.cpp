
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {  string s;
        cin>>n; c=0;
        ll arr[n],brr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>brr[i];
        }
        for(i=0; i<n; i++)
        {
            if((arr[i]<=2*brr[i])&& (brr[i]<=2*arr[i])) c++;
        }
        cout<<c<<endl;

        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
