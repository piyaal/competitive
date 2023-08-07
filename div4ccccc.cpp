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
        string s;
        cin>>n>>s;
        ll arr[n];
        ll f=0;
        a=0;
        b=n-1;
        c=n;
        while(a<=b)
        {
            if(s[a]!=s[b])
        {
            c-=2;
            a++;
            b--;
        }
        else {
            cout<<c<<endl; break;
        } if(c==0) cout<<0<<endl; }

        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
