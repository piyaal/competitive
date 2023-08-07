
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
       set<ll> ss;
        for(i=a; i<=b; i++)
        {
            ss.insert(i);
        }
      for(i=c; i<=d; i++)
        {
            ss.insert(i);
        }
 cout<<ss.size()<<endl;
        //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
