


#include<bits/stdc++.h>

using namespace std;

int main ()
{
    long long int a,b,c,d,m,k,n,q,i,j,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long  int arr[n+1],cr[n+1]={0};
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        sort(arr+1,arr+n+1,greater<int>());
        c=1;
        for(i=1; i<=n; i++)
        {
            cr[c]= arr[i]+cr[c-1];
      c++;
        }
        while(k--) { cin>>a;
        long long int l=1,h=n,f=0,m;
        while(l<=h)
        {
            m=(l+h)/2;
            if(cr[m]>=a )
            {
                f=m; h=m-1;
            }
            else if(cr[m]<a)
                l=m+1;

        } if(f)
    cout<<f<<endl; else cout<<-1<<endl; }
}
}

