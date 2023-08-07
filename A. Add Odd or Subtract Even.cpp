
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
        cin>>a>>b;
		if(a==b) cout<<0<<endl;
		else if(a<b&&(b-a)&1||a>b&&(a-b)%2==0) cout<<1<<endl;
		else cout<<2<<endl;
    }
}
