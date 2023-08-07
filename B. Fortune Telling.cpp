#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int a=0,b=0,c,i,j,t,n,m;
    cin>>n;
    int arr[n+1];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        a+=arr[i];
    }
    sort(arr,arr+n);
    if(n==1 && a%2==0)cout<<"0"<<endl;
    else if(n==1 && a%2==1)cout<<a<<endl;
    else
    {
        for(i=0; i<n; i++)
        {
            if(a%2==1 || a==0) break;
            else if(arr[i]%2==1) a-=arr[i];
        }
    cout<<a<<endl; }

}

