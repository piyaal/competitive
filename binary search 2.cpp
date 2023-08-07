

#include<bits/stdc++.h>

using namespace std;

int main ()
{
    long long int a,b,c,d,m,k,n,q,i,j,test;
    cin>>test;
    while(test--)
    {
        cin>>n>>k;
        long long  int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        c=0;
        for(i=0; i<n; i++)
        {
            long long int l=i+1,h=n-1,f=0,m;
            while(l<=h)
            {
                m=(l+h)/2; a=arr[i]+arr[m];
                if(a==k)
                {
                    c++;
                   break;
                }
                else if(a>k)
                    h=m-1;
                else
                    l=m+1;
            }
        }
        cout<<c<<endl;
    }
}

