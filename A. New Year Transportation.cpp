#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,k,i,a,b,c; t=1;
    //cin>>t;
    while(t--)
    {
	ll c=0,arr[100000];
	cin>>n>>k;
	for(i=1;i<n;i++)
	{
		cin>>arr[i];
	}
	for(c=1;c<k;c+=arr[c]);
	cout<<(c==k?"YES":"NO");
}
}
