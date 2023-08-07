
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
        cin>>n>>k;
    	if(n%k==0)
    	   cout<<1<<endl;
        else if(n>k)
    	    cout<<2<<endl;
    	else
    	   	cout<<(n+k-1)/n<<endl;

    }
}
