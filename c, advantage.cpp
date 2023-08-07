
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n+1],brr[n+1];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(i=0; i<n; i++)
        {
            brr[i]=arr[i];
        }
        sort(brr,brr+n);
        b=brr[n-2];
        a=*max_element(arr, arr + n);
        int max = INT_MIN;
        int index = -1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
                index = i;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(i!=index)
            {
                cout<< arr[i]-max<<" ";
            }
            else
                cout<< max-b<<" ";
        } cout<<endl;

    }
}
