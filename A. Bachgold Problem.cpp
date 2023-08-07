
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,t,i,a,b,c=0;
    //cin>>t;
    t=1;
    while(t--)
    {
        cin>>n;
         a= n/2;
	cout<<a<<endl;
	while(--a){
		cout<<2<<" ";
	}
	cout<<(n%2==1?3:2);
        //if cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}
