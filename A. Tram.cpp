#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    int t;
    cin>>t;
       d=0;
    c=0;
    for(int i=1; i<=t; i++)
    {
        cin>>a>>b;
        c=c-a+b;
        d=max(c,d);
    }
    cout<<d<<endl;
}
