
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {   cin>>a>>b>>c;
         m=min(b,c);  b=b-m;c=c-m; if(a>b && a>c)
         cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
