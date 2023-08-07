#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,t,i,j,k;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n>>m;
        for(i=1; i<=m; i++)
        {
            c+=i;
        }
        if(c<=n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
}
