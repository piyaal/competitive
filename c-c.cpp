
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c,m,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        c=1,d=0; cout<<1<<" ";
        for(i=1; i<=n-1; i++)
        {
            if(m-c-i+1>=n-i)
            {
                c+=i; }
                else  {c++;
            }
            cout<<c<<" ";}
        cout<<endl;
    }
}
