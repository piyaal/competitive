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
        cin>>n;
        ll arr[n];
        if(n%2==1)
            cout<<-1<<endl;
        else{
        for(i=1;i<=n; i=i+2)
        {
            cout<<i+1<<" "<<i<<" ";
        }
       cout<<endl; }
        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}

