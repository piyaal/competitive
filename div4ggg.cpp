
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {  string s;
        cin>>n>>m;
        ll arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(i=0; i<n; i++)
        {
            arr[i]+=i+1;
        }
        sort(arr,arr+n);
        for(i=0; i<n; i++)
        {
            if(m>=arr[i]) m-=arr[i];
            else break;
        }
        cout<<i<<endl;



        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
