#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c,m,k,l;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;

        c=0;
        l=(n+k-1)/k;

        for(i=0; i<m; i++)
        {
            cin >> a;
            if(a==l)
                c+=1;
            else if(a>l)
                c=1<<30;
        }
        cout<<(c<=(n-1)%k+1?"YES":"NO")<< endl;
    }
}
