
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j,i,k,n,c,sum=0;
    cin >> n;
    int arr[n+1];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0; i<n; i++)
    {
        if(arr[i]!=arr[i+1])sum++;
    } cout<<sum<<endl;
    return 0;
}
