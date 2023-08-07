
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,t,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        int arr[n+1];
        for(i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        if(arr[n-1]<=d||(arr[0]+arr[1]<=d))
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
