#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
int main()
{
    int a,b,d,m,t;
    ll n,i,j;
    cin>>n;
    ll flg=0,c;
    ll mx=n/7,mx1=n/4;
    for(i=0; i<=mx1; i++)
    {
        for(j=0; j<=mx; j++)
        {
          c=j*7 + i*4;
            if(c==n)
            {
                flg=1;
                break;
            }
        }
        if(flg)break;
    }
    if(flg==1)
    {
        for(ll p=0; p<i; p++)cout<<"4";
        for(ll p=0; p<j; p++)cout<<"7";
        cout<<"\n";
    }
    else cout<<-1<<"\n";
}
