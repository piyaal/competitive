
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n; c=1;
        int arr[n+1];
        string s,ss;
        for(i=0; i<n; i++)
        {  cin>>arr[i];
           c=c*arr[i];
         } cout<< (c+n-1)*2022<<endl;
             //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
