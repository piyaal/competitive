
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    long long int a,b,c,d,m,n,q,i,j;
    cin>>n>>q;
   long long  int arr[n],sum[n+1]= {};
    for(i=1; i<=n; i++)
    {
        cin>>m;
        sum[i]+=sum[i-1]+m;
    }
    for(i=1; i<=q; i++)
    {
        cin>>a>>b;
        cout<<sum[b]-sum[a-1]<<endl;
    }
}
