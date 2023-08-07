#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,n,m,t,mx;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>mx;
        m=-99999999;
        for(i=1; i<=n-1; i++)
        {
            cin>>a;
            m=max(m,mx-a);mx=max(mx,a);
        }
        cout<<m<<endl;
    }
}
