#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,c,d,i,n,m;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int arr[n];
        cin>>m;
        c=0;
        int a=9999999;
        for(i=1;i<=m;i++){
        cin>>arr[i];
            a=min(a,arr[i]);


     for(i=1;i<=m;i++){
         c+=arr[i]-a;

     }
    cout<<c<<endl;
    }
    }
}

