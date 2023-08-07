
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a<c && b<d && a<b && c<d) cout<<"YES"<<endl;
        else if(a>c && b>d && a<b && c<d)  cout<<"YES"<<endl;
        else if(a<c && b<d && a>b && c>d)  cout<<"YES"<<endl;
         else if(a>c && b>d && a>b && c>d)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
