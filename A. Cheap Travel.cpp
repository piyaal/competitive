
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c;
    t=1;
    while(t--)
    {
        cin>>n>>m>>a>>b;
        if(m*a>b)
        {
            if(n>=m)
            {
                if(n%m==0)
                    c=(n/m)*b;
                else if(n%m!=0 && a<b)
                    c=(n/m)*b+(n%m)*a;
                else if(n%m!=0 && a>=b)
                    c=(n/m)*b+b;
            }
            else { if(n<m && n*a>b) c=n*a; else c=b; }
        }
        else
        {

            c=n*a;
        }
        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
    cout<<c<<endl;
}
