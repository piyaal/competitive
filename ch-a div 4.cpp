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
        string s,ss;
        cin>>s;
        n=s.size();
        c=s[0]-'0';
        ss=""; a=0;
        for(i=0; i<n; i++)
        { c=s[i]-'0';
          if(c==7)
          {
              cout<<"YES"<<endl;a=1;break;
          }
          }

        if(a==0) cout<<"NO"<<endl;
        //else cout<<"NO"<<endl;
    }
}
