
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int a,t,j,i,k,n;
    cin>>t;
    while(t--)
    {
        cin >>n;
        ll int arr[n+1],x=0,y=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(i=0; i<n; i++)
        {
            if(arr[i]>-1)x+=arr[i];
            else y+=arr[i];
            } cout<< abs(abs(x)-abs(y))<<endl;
    }
}
