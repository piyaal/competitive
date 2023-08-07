#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t,cc;
    string s;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>l;
        for(i=1;i<=l;i++)
        {
            cin>>n>>m>>d;
            c+=n*d;
        } cout<<c<<endl;
    }
}

