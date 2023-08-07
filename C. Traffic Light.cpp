#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{
    ll n,t,i,a,b,c;
    cin>>t;
    while (t--)
    {
        char c;
        cin>>n>>c;
        string s,t;
        cin>>s;
        t="";
        for(i=0;i<n;i++)
        {
            if(s[i]=='g')
            {
                t+='g';
                break;
            }
            else
            {
                t+= s[i];
            }
        }
        string k=s+t;
        ll m=k.size();
        ll cc= 0;
      ll j=m - 1;
        for(i=m-1;i>=0;i--)
        {
            if (k[i]=='g')
            {
              j=i;
            }
            if(k[i]==c)
            {
                cc=max(cc,j - i);
            }
        }
        cout<<cc<<endl;
    }

}
