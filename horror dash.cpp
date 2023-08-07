#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t,cc;
    string s;
    cin>>t;
    c=0;
    while(t--)
    {
        cin>>n;
           c++;
        int mx=-99999;
        for(i=1; i<=n; i++)
        {
            cin>>m;
            if(m>mx) mx=m;
        }
        printf("Case %d: ", c);
        cout<<mx<<endl;
    }
}



