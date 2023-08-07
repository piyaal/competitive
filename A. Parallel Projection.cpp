
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c,d,e,f,g,cc;
    cin>>t;
    while(t--)
    {
        cin>>e>>f>>g;
        cin>>a>>b>>c>>d;
        cc=g;
        cc+=min(min(abs(b-d)+a+c,abs(b-d)+(e-a)+(e-c)),min(abs(a-c)+b+d,abs(a-c)+(f-b)+(f-d)));
             //sort(arr+1,arr+n+1);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
        cout<<cc<<endl;
    }
}
