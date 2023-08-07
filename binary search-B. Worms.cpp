
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e6+10;
ll brr[N],crr[N];
int main ()
{
    long long int n,a,b,t,q,i,j,m,c=0;
    t=1;
    while(t--)
    {
        cin>>n;
        c=0;
        ll arr[n+1];
        a=1;
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
            c+=arr[i];
            while(a<=c) { crr[a]=a;
                brr[a++]=i;
            }
        } //for(i=1;i<=c;i++) cout<<i<<" "<<brr[i]<<endl;
        cin>>m;
        ll rr[m+1];
        for(i=1; i<=m; i++){ cin>> rr[i];
        ll lo=1,hi=a, mid;
        while(hi-lo>0)
        {
            mid=(lo+hi)/2;
            if (crr[mid]<rr[i])
            {
                lo=mid+1;
            }
            else
                hi=mid;
        }
      if(hi)
        cout<<brr[hi]<<endl; else cout<<brr[lo]<<endl;
    }
 }}
