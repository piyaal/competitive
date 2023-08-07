

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m,l,t,cc;
    string s;
    while(cin>>a>>b>>c)
    {
        if(a==b && b==c) cout<<"*"<<endl;
        else if(a==b &&b!=c) cout<<"C"<<endl;
        else if(c==b &&b!=a) cout<<"A"<<endl;
        else if(a==c &&b!=c) cout<<"B"<<endl;
    }
}


