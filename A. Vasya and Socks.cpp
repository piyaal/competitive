
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,m,c=0; t=1;
    //cin>>t;
    while(t--)
    {
        cin>>n>>m;
        // int arr[n+1];
    ll cc= n;
    ll t= n;
    while(t>=m)
    {
        ll a= t/m;
        cc+=a;
        t=a+t%m;
    }

    cout<<cc<<endl;

        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
