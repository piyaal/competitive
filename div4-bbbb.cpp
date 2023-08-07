
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n>>s;
        ll x=0,y=0,f=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='U') y++;
            else if(s[i]=='D')y--;
            else if(s[i]=='R')x++;
            else if(s[i]=='L') x--;
             if(x==1 && y==1){ cout<<"YES"<<endl; f=1;break;}
        }
        if(f==0)
        cout<<"NO"<<endl;
    }
}
