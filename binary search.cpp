
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    long long int a,b,c,d,m,k,n,q,i,j;
    cin>>n>>k;
   long long  int arr[n],sum[n+1]= {};
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    } sort(arr,arr+n); c=0;
    for(i=0; i<n; i++)
    {
       long long int l=0,h=n-1,f=0,m;
        while(l<=h)
        {
            m=(l+h)/2;
            if(arr[m]==arr[i]+k)
            {
                c++;
                break;
            }
            else if(arr[m]>k+arr[i])
                h=m-1;
            else
                l=m+1;
        }
    }
    cout<<c<<endl;
}

