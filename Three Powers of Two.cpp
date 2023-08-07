
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
        cin>>n;
        ll arr[n];
        string s,ss;
        cin>>s;
        ll cc=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='1') cc++;
        }
        if(s=="1"|| s=="10") cout<<"NO"<<endl;
        else if(cc<=3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
