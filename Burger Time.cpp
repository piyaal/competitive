#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,r,i,j,n,m,l,t,cc;
    string s;

    while(cin>>n && n!=0)
    {
        d=n;
        r=n;
        cc=n;
        for(i=1; i<=n; i++)
        {
            char c;
            cin>>c;
            if(c=='Z') cc=0;
            else if(c=='D')
            {
                d=0;
                if(cc>r)cc=r;
            }
            else if(c=='R')
            {
                r=0;
                if(cc>d)cc=d;
            } r++; d++;
        }cout<<cc<<endl;
    }
}
