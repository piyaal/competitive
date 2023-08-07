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
        int arr[n+1];

        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        a=arr[1];
        b=arr[1];
        for(i=1; i<=n; i++)
        {
            a=a|arr[i];
            b=b&arr[i];
        } cout<<a-b<<endl;
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}

