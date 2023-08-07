
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        ll aa=0,bb=0,cc=0; if(a>0 && b<=0 && c<=0 && d<=0) cout<<a<<endl; else {
        while(a>0 && b>0 && c>0 || d>0 )
        {
            if(aa>=0 && bb>=0)
            {
                if(a>0)
                {
                    a--;
                    aa++;
                    bb++;
                    cc++;
                }
                else if(b>0)
                {
                    aa++;
                    bb--;
                    b--;
                    cc++;
                }
                else if(c>0)
                {
                    aa--;
                    bb++;
                    c--;
                    cc++;
                }
                else if(d>0)
                {
                    aa--;
                    bb--;
                    d--;
                    cc++;
                }
            }
            else if(aa<0 && bb<0)
            {
                break;
            }
            else
            {
                if(aa<0)
                {
                    if(b>0)
                    {
                        b--;
                        aa++;
                        bb--;
                        cc++;
                    }
                    else if(a>0)
                    {
                        a--;
                        aa++;
                        bb++;
                        cc++;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if(c>0)
                    {
                        c--;
                        aa--;
                        bb++;
                        cc++;
                    }
                    else if(a>0)
                    {
                        a--;
                        aa++;
                        bb++;
                        cc++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        cout<<cc<<endl;
    } }
}
