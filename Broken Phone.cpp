#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,m,n,t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>a>>b;
        if(a>b)cout<<"NEW PHONE"<<endl;
        else if(a<b)cout<<"REPAIR"<<endl;
        else if(a==b) cout<<"ANY"<<endl;
    }
    return 0;
}
