
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        if((a==b&& a==n)||(n-(a+b)>1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
