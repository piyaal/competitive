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
         ll c=0;
        for(ll j=1; j<10; j++)
        {
            for(i=j; i<=n;)
            {
                c++;
                i=i*10+j;
            }
        }
        cout<<c<<endl;
    }
}
